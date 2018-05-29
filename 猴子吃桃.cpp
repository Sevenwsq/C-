#include<stdio.h>
int main(void)
{
	int i,n;
	int sum=1;
	scanf("%d",&n);
	for(i=(n-1);i>=1;i--)
	{
		sum=2*(sum+1);
	}
	printf("%d",sum);
	return 0;
}
