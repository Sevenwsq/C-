#include<stdio.h>
int main(void)
{
	int year;
	printf("����һ����ݣ�");
	scanf("%d",&year);
	if(year%4==0&&year%100!=0)
	printf("%d������",year);
	else
	printf("%d��������",year);
	return 0;
 } 
