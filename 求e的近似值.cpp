#include<stdio.h>
int factorial(int n);
int main(void)
{
	int i,n;
	double e=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	e+=1.0/factorial(i); 
	printf("%.8lf\n",e);
	return 0;
}
int factorial(int n)
{
	if(n<1)
	return 1;
	return n*factorial(n-1);
}


