#include<stdio.h>
int main(void)
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=(n+1)/2;i++)
	{
		for(j=1;j<=(n+1)-i;j++)
		printf(" ");
		for(j=1;j<=2*i-1;j++)
		printf("*");
		printf("\n");
	}
	for(i=(n-1)/2;i>=1;i--)
	{
		for(j=1;j<=(n+1)-i;j++)
		printf(" ");
		for(j=1;j<=2*i-1;j++)
		printf("*");
		printf("\n");
	}
 }

