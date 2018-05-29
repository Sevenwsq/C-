#include<stdio.h>
int main(void)
{
	int year;
	printf("输入一个年份：");
	scanf("%d",&year);
	if(year%4==0&&year%100!=0)
	printf("%d是闰年",year);
	else
	printf("%d不是闰年",year);
	return 0;
 } 
