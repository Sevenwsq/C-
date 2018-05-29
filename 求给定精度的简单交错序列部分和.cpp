#include<stdio.h>
#include<math.h>
int main(void)
{
	double sum,t,n,j,i;
	sum=0; 
	scanf("%lf",&n);
	while(fabs(t)<n)
	{
		i=1;
	t=1.0/i*(pow(-1,i+1));	
	sum=sum+t;
	i+=3;
    }
	printf("sum=%.6lf",sum);
	return 0;
}


