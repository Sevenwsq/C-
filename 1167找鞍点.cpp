#include<stdio.h>
int main(void)
{
	int a[100][100];
	int i,j;
	int n;
	scanf("%d",&n); 
	int flag;
	int max[100],min[100]; 
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
	max[i]=a[i][0];
	for(j=0;j<n;j++)
	min[j]=a[0][j];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]>max[i])
			max[i]=a[i][j];
			if(a[i][j]<min[j])
			min[j]=a[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		if(max[i]==min[j])
	{
		printf("%d %d",i,j);
		flag=1;
	}
	}
	if(flag!=1)
	printf("NONE");
	return 0;
}
