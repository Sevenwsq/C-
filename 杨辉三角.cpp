#include<stdio.h>
int main(void)
{
	int i,j,n,a[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	a[i][0]=a[i][i]=1;
	for(i=2;i<n;i++)
    {
    	for(j=1;j<=i-1;j++)
    	a[i][j]=a[i-1][j-1]+a[i-1][j];
	 } 
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
	return 0;
}
