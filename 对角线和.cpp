#include<stdio.h>
int main(void)
{
	int a[4][4];
	int i,j;
	int sum=0;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		scanf("%d",&a[i][j]);
	}
    for(i=0;i<4;i++)
    {
    	sum=sum+a[i][i]+a[3][3-i];
	}
	printf("%d",sum);
	return 0;
}
