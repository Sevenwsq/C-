#include<stdio.h>
int main(void)
{
	int a[100][100];
	int sum[100];
	int i,j,k;
	int m,n;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
	      {
	      sum[i]+=a[i][j];
		  }
		}
	for(k=0;k<m;k++)
	printf("%d\n",sum[k]);
	return 0;
}
