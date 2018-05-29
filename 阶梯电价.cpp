#include<stdio.h>
int main()
{
	double n,cost;
	scanf("%lf",&n);
	if(n<=50)
	cost=0.53*n;
	if(n>50)
	cost=50*0.53+0.58*(n-50);
	printf("cost = %.2lf",cost);
	return 0;
	
}
