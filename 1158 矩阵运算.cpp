#include<stdio.h>
int main(void)
{
	int a[4][4];
	int i,j,p,n;
	int add=0,sum1=0,sum2=0,sum,s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	}
		for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		add+=a[i][j];
	}
	for(p=1;p<n;p++)
	{
		sum2+=a[3][p]+a[p][3];
	}
	for(i=0;i<n;i++)
	{
		sum1+=a[i][n-1-i];
	}
   s=add-(sum1+sum2)+a[n-1][n-1];
   printf("%d",s);
   return 0;
}
