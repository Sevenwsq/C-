<pre code_snippet_id="362188" snippet_file_name="blog_20140525_2_5073445"  code_snippet_id="362188" snippet_file_name="blog_20140525_2_5073445" name="code" class="cpp">// WavePlayer.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "afx.h"
#include "mmsystem.h"

#pragma comment(lib,"winmm.lib")

/* WAV Riff文件头*/
typedef struct _RIFF_HEADER
{
	char szRiffID[4]; // 'R','I','F','F'
	DWORD dwRiffSize;	//从下一字节，到文件结束的字节数。加上就是整个文件的大小
	char szRiffFormat[4]; // 'W','A','V','E'
}RIFF_HEADER,*LP_RIFF_HEADER;

typedef struct _WAV_FORMAT
{
	WORD	wFormatTag	;	//格式种类1为PCM
	WORD	wTracks		;	//声道数
	DWORD	dwSamplesPerSec	;	//采样频率
	DWORD	dwAvgBytesPerSec;	//每秒的字节数，是大B。
	WORD	wBlockAlign		;	//数据的调整数，按B计算
	WORD	wBitsPerSample	;	//样本采样位数
}WAV_FORMAT,*LP_WAV_FORMAT;

/* 数据块头*/
typedef struct _DATA_CHUNK
{
	char szDataID[4]; // 'd','a','t','a'
	DWORD dwDataSize; // 接下来数据的长度
}DATA_CHUNK,*LP_DATA_CHUNK;

typedef struct _FMT_CHUNK
{
	char	szFmtID[4]	;	// 'f','m','t',' '
	DWORD	dwFmtSize	;	// 一般等于，表示WAVE_FORMAT的字节数
	WAV_FORMAT wavFormat;	//这个结构体大小刚好为

}FMT_CHUNK,*LP_FMT_CHUNK;


int _tmain(int argc, _TCHAR* argv[])
{

	LPCTSTR pWavFilePath = _T("C:/Lenka - Trouble Is A Friend.wav") ;

	CFile file ;
	file.Open(pWavFilePath,CFile::modeRead|CFile::shareDenyWrite);

	RIFF_HEADER riffHeader ;
	memset(&riffHeader,0,sizeof(RIFF_HEADER));
	file.Read(&riffHeader,sizeof(RIFF_HEADER));

	FMT_CHUNK	fmtBlock ;
	memset(&fmtBlock,0,sizeof(FMT_CHUNK));
	file.Read(&fmtBlock,sizeof(FMT_CHUNK));

	DATA_CHUNK	dataBlock;
	memset(&dataBlock,0,sizeof(DATA_CHUNK));
	file.Read(&dataBlock,sizeof(DATA_CHUNK));

	printf("文件大小应该为%u字节。\n",riffHeader.dwRiffSize + 8); //8是前面的四个字节
	printf("所有的头信息包含%u字节。\n",sizeof(RIFF_HEADER) + sizeof(FMT_CHUNK) + sizeof(DATA_CHUNK)); 

	UINT uiWaveOutDevNum = waveOutGetNumDevs();
	if(uiWaveOutDevNum == 0)
	{
		MessageBox(NULL, _T("waveOutGetNumDevs"), _T("waveOut声音播放"),MB_ICONINFORMATION);
		return 0 ;
	}

	WAVEFORMATEX	winWaveFormatEx ;
	winWaveFormatEx.wFormatTag = fmtBlock.wavFormat.wFormatTag ;
	winWaveFormatEx.nChannels	= fmtBlock.wavFormat.wTracks ;
	winWaveFormatEx.nSamplesPerSec = fmtBlock.wavFormat.dwSamplesPerSec ;
	winWaveFormatEx.nAvgBytesPerSec = fmtBlock.wavFormat.dwAvgBytesPerSec ;
	winWaveFormatEx.nBlockAlign = fmtBlock.wavFormat.wBlockAlign ;
	winWaveFormatEx.wBitsPerSample = fmtBlock.wavFormat.wBitsPerSample;
	winWaveFormatEx.cbSize = sizeof(WAVEFORMATEX);

	HWAVEOUT hWinWaveOut = NULL;
	MMRESULT mmresult	;
	//打开一个音频设备，设置回调函数和标志参数[0x10011001为标志，在回调中dwInstance就是这个值]
	mmresult = waveOutOpen(&hWinWaveOut,/*WAVE_MAPPER*/0,&winWaveFormatEx,NULL,NULL,0);
	if(MMSYSERR_NOERROR != mmresult)
	{
		MessageBox(NULL, _T("waveOutOpen"), _T("waveOut声音播放"),MB_ICONINFORMATION);
		return 0 ;
	}

	//双缓冲区播放
	const DWORD bufLen = 128 * 1024 ;//缓存大小，K。
	LPBYTE pDataBuffer[2] ;
	pDataBuffer [0]= new BYTE[bufLen] ;//数据缓存。
	pDataBuffer [1]= new BYTE[bufLen] ;//数据缓存。

	WAVEHDR		winWaveHdr[2]  ;
	winWaveHdr[0].lpData = (LPSTR)pDataBuffer[0] ;
	winWaveHdr[0].dwBufferLength = bufLen ; //存放缓存最大长度
	winWaveHdr[0].dwBytesRecorded = 0 ;	 //存放当前缓存有多少数据
	winWaveHdr[0].dwUser = 0 ;
	winWaveHdr[0].dwFlags = WHDR_DONE ;
	winWaveHdr[0].dwLoops = 1 ;
	winWaveHdr[0].lpNext = NULL ; 
	winWaveHdr[0].reserved = 0 ;
	winWaveHdr[1].lpData = (LPSTR)pDataBuffer[1] ;
	winWaveHdr[1].dwBufferLength = bufLen ; //存放缓存最大长度
	winWaveHdr[1].dwBytesRecorded = 0 ;	 //存放当前缓存有多少数据
	winWaveHdr[1].dwUser = 0 ;
	winWaveHdr[1].dwFlags = WHDR_DONE ;
	winWaveHdr[1].dwLoops = 1 ;
	winWaveHdr[1].lpNext = NULL ; 
	winWaveHdr[1].reserved = 0 ;


	int iBufferIndex = 0 ;//由这个变量来判断是该使用哪个缓存
	DWORD dwReadedBytes = 0 ;

	while((dwReadedBytes = file.Read(pDataBuffer[iBufferIndex],bufLen)) > 0)
	{//读取成功并得到有效数据
		winWaveHdr[iBufferIndex].dwBytesRecorded = dwReadedBytes ;
		//准备音频数据，这里判断的和正在播放的不是同一个缓冲区，可以更快的准备好数据。
		while(!(winWaveHdr[iBufferIndex].dwFlags & WHDR_DONE))
		{//waveOutWrite函数的对应的播放线程如果使用完了这个缓存，会给一个WHDR_DONE标志
			Sleep(1);
		}

		mmresult = waveOutPrepareHeader(hWinWaveOut,&winWaveHdr[iBufferIndex],sizeof(WAVEHDR));
		if(MMSYSERR_NOERROR != mmresult)
		{
			MessageBox(NULL, _T("waveOutPrepareHeader"), _T("waveOut声音播放"),MB_ICONINFORMATION);
			return 0 ;
		}
		if(!(winWaveHdr[iBufferIndex].dwFlags & WHDR_PREPARED))
		{
			MessageBox(NULL, _T("waveOutPrepareHeader"), _T("waveOut声音播放"),MB_ICONINFORMATION);
			return 0 ;
		}

		//写入音频数据到设备
		mmresult = waveOutWrite(hWinWaveOut,&winWaveHdr[iBufferIndex],sizeof(WAVEHDR));
		if(MMSYSERR_NOERROR != mmresult)
		{
			MessageBox(NULL, _T("waveOutWrite"), _T("waveOut声音播放"),MB_ICONINFORMATION);
			return 0 ;
		}

		//控制切换缓冲区
		iBufferIndex = iBufferIndex ? 0 : 1 ;
	}

	delete pDataBuffer[0] ;
	pDataBuffer[0] = NULL ;
	delete pDataBuffer[1] ;
	pDataBuffer[1] = NULL ;
	winWaveHdr[0].lpData = NULL ;
	winWaveHdr[1].lpData = NULL ;
	waveOutUnprepareHeader(hWinWaveOut,&winWaveHdr[0],sizeof(WAVEHDR));
	waveOutUnprepareHeader(hWinWaveOut,&winWaveHdr[1],sizeof(WAVEHDR));
	waveOutClose(hWinWaveOut);
	hWinWaveOut = NULL ;
	file.Close();

	printf("播放完了。\n按任意键结束...");
	getchar();
	return 0;
}
</pre>
