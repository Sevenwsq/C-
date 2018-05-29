#include<stdio.h>
int point(int (*a)[100],int n,int m);
int main(void)
{
	int a[100][100];
	int i,j;
	int n,m;
	int flag;
	scanf("%d",&n);
	scanf("%d",&m);
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	scanf("%d",&a[i][j]);
	point(a,n,m);
	return 0;
}
int point(int (*a)[100],int n,int m)
{
	int i,j;
	int max[100],min[100]; 
	for(i=0;i<n;i++)
	max[i]=a[i][0];
	for(j=0;j<m;j++)
	min[j]=a[0][j];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]>max[i])
			max[i]=a[i][j];
			if(a[i][j]<min[j])
			min[j]=a[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
	{		if(max[i]==min[j])
		{
			printf("%d %d",i,j);
		}
	} 
	}
}
