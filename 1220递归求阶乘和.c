#include <stdio.h>
double fact( int n );
double factsum( int n );
int main()
{
    int n;
    scanf("%d",&n);
    printf("fact(%d) = %.0f\n", n, fact(n));
    printf("sum = %.0f\n", factsum(n));
    return 0;
}
double fact(int n)
{
	double i,t=1;
	for(i=1;i<=n;i++)
	{
		t=t*i;
		}
		return t;	
}
double factsum( int n )
{
	int i;
	double sum=0;
	for(i=1;i<=n;i++)
	{
		sum+=fact(i);
	}
	return sum;
}
