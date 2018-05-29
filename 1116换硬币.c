#include<stdio.h>
int main(void)
{
	int x,i,j,k;
	int count=0;
	scanf("%d",&x);
	if(8<x&&x<100)
	{ 
	for(i=3;i>=1;i--)
	for(j=7;j>=1;j--)
	for(k=13;k>=1;k--)
	{
		if(5*i+2*j+k==x)
		{
			printf("fen5:%d,fen2:%d,fen1:%d,total:%d\n",i,j,k,i+j+k);
			count++;
		} 
	}
		printf("count=%d",count);
	}		
	return 0;
 } 
