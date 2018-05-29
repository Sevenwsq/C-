<pre code_snippet_id="362188" snippet_file_name="blog_20140525_2_5073445"  code_snippet_id="362188" snippet_file_name="blog_20140525_2_5073445" name="code" class="cpp">// WavePlayer.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "afx.h"
#include "mmsystem.h"

#pragma comment(lib,"winmm.lib")

/* WAV Riff�ļ�ͷ*/
typedef struct _RIFF_HEADER
{
	char szRiffID[4]; // 'R','I','F','F'
	DWORD dwRiffSize;	//����һ�ֽڣ����ļ��������ֽ��������Ͼ��������ļ��Ĵ�С
	char szRiffFormat[4]; // 'W','A','V','E'
}RIFF_HEADER,*LP_RIFF_HEADER;

typedef struct _WAV_FORMAT
{
	WORD	wFormatTag	;	//��ʽ����1ΪPCM
	WORD	wTracks		;	//������
	DWORD	dwSamplesPerSec	;	//����Ƶ��
	DWORD	dwAvgBytesPerSec;	//ÿ����ֽ������Ǵ�B��
	WORD	wBlockAlign		;	//���ݵĵ���������B����
	WORD	wBitsPerSample	;	//��������λ��
}WAV_FORMAT,*LP_WAV_FORMAT;

/* ���ݿ�ͷ*/
typedef struct _DATA_CHUNK
{
	char szDataID[4]; // 'd','a','t','a'
	DWORD dwDataSize; // ���������ݵĳ���
}DATA_CHUNK,*LP_DATA_CHUNK;

typedef struct _FMT_CHUNK
{
	char	szFmtID[4]	;	// 'f','m','t',' '
	DWORD	dwFmtSize	;	// һ����ڣ���ʾWAVE_FORMAT���ֽ���
	WAV_FORMAT wavFormat;	//����ṹ���С�պ�Ϊ

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

	printf("�ļ���СӦ��Ϊ%u�ֽڡ�\n",riffHeader.dwRiffSize + 8); //8��ǰ����ĸ��ֽ�
	printf("���е�ͷ��Ϣ����%u�ֽڡ�\n",sizeof(RIFF_HEADER) + sizeof(FMT_CHUNK) + sizeof(DATA_CHUNK)); 

	UINT uiWaveOutDevNum = waveOutGetNumDevs();
	if(uiWaveOutDevNum == 0)
	{
		MessageBox(NULL, _T("waveOutGetNumDevs"), _T("waveOut��������"),MB_ICONINFORMATION);
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
	//��һ����Ƶ�豸�����ûص������ͱ�־����[0x10011001Ϊ��־���ڻص���dwInstance�������ֵ]
	mmresult = waveOutOpen(&hWinWaveOut,/*WAVE_MAPPER*/0,&winWaveFormatEx,NULL,NULL,0);
	if(MMSYSERR_NOERROR != mmresult)
	{
		MessageBox(NULL, _T("waveOutOpen"), _T("waveOut��������"),MB_ICONINFORMATION);
		return 0 ;
	}

	//˫����������
	const DWORD bufLen = 128 * 1024 ;//�����С��K��
	LPBYTE pDataBuffer[2] ;
	pDataBuffer [0]= new BYTE[bufLen] ;//���ݻ��档
	pDataBuffer [1]= new BYTE[bufLen] ;//���ݻ��档

	WAVEHDR		winWaveHdr[2]  ;
	winWaveHdr[0].lpData = (LPSTR)pDataBuffer[0] ;
	winWaveHdr[0].dwBufferLength = bufLen ; //��Ż�����󳤶�
	winWaveHdr[0].dwBytesRecorded = 0 ;	 //��ŵ�ǰ�����ж�������
	winWaveHdr[0].dwUser = 0 ;
	winWaveHdr[0].dwFlags = WHDR_DONE ;
	winWaveHdr[0].dwLoops = 1 ;
	winWaveHdr[0].lpNext = NULL ; 
	winWaveHdr[0].reserved = 0 ;
	winWaveHdr[1].lpData = (LPSTR)pDataBuffer[1] ;
	winWaveHdr[1].dwBufferLength = bufLen ; //��Ż�����󳤶�
	winWaveHdr[1].dwBytesRecorded = 0 ;	 //��ŵ�ǰ�����ж�������
	winWaveHdr[1].dwUser = 0 ;
	winWaveHdr[1].dwFlags = WHDR_DONE ;
	winWaveHdr[1].dwLoops = 1 ;
	winWaveHdr[1].lpNext = NULL ; 
	winWaveHdr[1].reserved = 0 ;


	int iBufferIndex = 0 ;//������������ж��Ǹ�ʹ���ĸ�����
	DWORD dwReadedBytes = 0 ;

	while((dwReadedBytes = file.Read(pDataBuffer[iBufferIndex],bufLen)) > 0)
	{//��ȡ�ɹ����õ���Ч����
		winWaveHdr[iBufferIndex].dwBytesRecorded = dwReadedBytes ;
		//׼����Ƶ���ݣ������жϵĺ����ڲ��ŵĲ���ͬһ�������������Ը����׼�������ݡ�
		while(!(winWaveHdr[iBufferIndex].dwFlags & WHDR_DONE))
		{//waveOutWrite�����Ķ�Ӧ�Ĳ����߳����ʹ������������棬���һ��WHDR_DONE��־
			Sleep(1);
		}

		mmresult = waveOutPrepareHeader(hWinWaveOut,&winWaveHdr[iBufferIndex],sizeof(WAVEHDR));
		if(MMSYSERR_NOERROR != mmresult)
		{
			MessageBox(NULL, _T("waveOutPrepareHeader"), _T("waveOut��������"),MB_ICONINFORMATION);
			return 0 ;
		}
		if(!(winWaveHdr[iBufferIndex].dwFlags & WHDR_PREPARED))
		{
			MessageBox(NULL, _T("waveOutPrepareHeader"), _T("waveOut��������"),MB_ICONINFORMATION);
			return 0 ;
		}

		//д����Ƶ���ݵ��豸
		mmresult = waveOutWrite(hWinWaveOut,&winWaveHdr[iBufferIndex],sizeof(WAVEHDR));
		if(MMSYSERR_NOERROR != mmresult)
		{
			MessageBox(NULL, _T("waveOutWrite"), _T("waveOut��������"),MB_ICONINFORMATION);
			return 0 ;
		}

		//�����л�������
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

	printf("�������ˡ�\n�����������...");
	getchar();
	return 0;
}
</pre>
