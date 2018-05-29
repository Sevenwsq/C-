#include<stdio.h>
int main(void)
{
	int m,n;
	double i,sum=0;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		sum+=i*i+1/i;
	}
	printf("sum = %.6lf",sum);
	return 0;
}
