#include<stdio.h>
#include<math.h>
int main(void)
{
	int i,n;
	double sum;
	sum=0;
	scanf("%d",&n); 
	for(i=1;i<=n;i++)
	{
	sum=sum+1.0/(3*i-2)*(pow(-1,i+1));
	}
	printf("sum = %.3lf",sum);
	return 0;
}
