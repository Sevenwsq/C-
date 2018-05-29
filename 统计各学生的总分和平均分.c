#include<stdio.h>
int main(void)
{
	int a[5][4];//行标表示学生编号，列标依次为 语文 数学 物理 英语成绩 
	int i,j;
	int sum1=0,sum2=0,sum3=0,sum4=0,sum5=0;
	int average1,average2,average3,average4,average5;
	int sChinese=0,sMath=0,sEnglish=0,sPhysical=0;
	int	averageC,averageM,averageE,averageP;
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		scanf("%d",&a[i][j]);
	}
		for(j=0;j<4;j++)
		{
			sum1+=a[0][j];
			sum2+=a[1][j];
			sum3+=a[2][j];
			sum4+=a[3][j];
			sum5+=a[4][j];
		}
		average1=sum1/4; average2=sum2/4; average3=sum3/4; average4=sum4/4; average5=sum5/4;
		printf("sum1=%d  sum2=%d  sum3=%d  sum4=%d  sum5=%d\n",sum1,sum2,sum3,sum4,sum5);
		printf("\n");
		printf("average1=%d  average2=%d  average3=%d  average4=%d  average5=%d\n",average1,average2,average3,average4,average5);
		printf("\n");
		for(i=0;i<5;i++)
		{
			sChinese+=a[i][0];  sMath+=a[i][1];  sEnglish+=a[i][2];	 sPhysical+=a[i][3];
		}
		averageC=sChinese/5; averageM=sMath/5; averageE=sEnglish/5; averageP=sPhysical/5;
		printf("sChinese=%d  sMath=%d  sEnglish=%d  sPhysical=%d\n",sChinese,sMath,sEnglish,sPhysical);
		printf("\n");
		printf("averageC=%d  averageM=%d  averageE=%d  averageP=%d\n",averageC,averageM,averageE,averageP);
		printf("\n");
		return 0;
}


