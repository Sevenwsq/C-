#include<stdio.h>
int main(void)
{
	int i;
	float scores[30], sum=0, avg;
	 int num=0;
	 for(i=0; i<30; i++)
	 {
	 	scanf("%f",&scores[i]);
	 	sum=sum+scores[i];
	 }
	 avg=sum/30;
	 printf("输出高于平均成绩的人数：\n");
	 for (i=0; i<30; i++)
	 if(scores[i]>avg)
	 num = num+1;
	 printf("%d",num);
	 return 0;

}
