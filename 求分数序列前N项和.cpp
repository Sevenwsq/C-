#include<stdio.h>
int main(void) 
{
	double a, b, i, n, t;
	double sum;
	a = 1;
	b = 2;
	sum = 0;
    scanf("%lf",&n);
	for (i=1; i<=100; i++) 
	{
		sum = sum + b / a;
		t = b;
		b = a + b;
		a = t;
	}
	printf("%.2lf\n",sum);
	return 0;
}

