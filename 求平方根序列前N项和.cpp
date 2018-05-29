#include<stdio.h>
#include<math.h>
int main(void)
{
	int n,i;
	double sum;
	sum=0;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		sum=sum+sqrt(i);
	}
	printf("sum=%.2lf",sum);
	return 0;
}


