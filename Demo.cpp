#include<stdio.h>
int main(void)
{
	char R[20][2];
	int i=0,j=0,n;
	printf("�����빲�м����Ԫ��ϵ��");
	scanf("%d",&n);
	for(i=0;i<n;i++) 
		for(j=0;j<2;j++)
			scanf("%c ",&R[i][j]);
	for(i=0;i<n;i++) 
		for(j=0;j<2;j++)
		printf("%c ",R[i][2-j]);
	
 } 
