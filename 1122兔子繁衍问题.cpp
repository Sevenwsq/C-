#include<stdio.h>
int main(void)
{
	int a[100];
	int i,n,sum;
	scanf("%d",&n);
	a[0]=a[1]=1;
	sum=a[0]+a[1];
	for(i=1;sum<n;i++)
	{
		sum+=a[i];
		a[i+1]=a[i-1]+a[i];
		
	}
	printf("%d",i+2);
	return 0;
 } 
