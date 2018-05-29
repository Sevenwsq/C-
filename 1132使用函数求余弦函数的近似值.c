#include <stdio.h>
#include <math.h>
double funcos( double e, double x );
int main()
{    
    double e, x;
    scanf("%lf %lf", &e, &x);
    printf("cos(%.2lf) = %.6lf\n", x, funcos(e, x));
    return 0;
}
double funcos( double e, double x )
{
	double sum=1,t=1;
	int flag=1,i;
	for(i=2;;i=i+2)
	{
		t=1.0*t*(i-1)*i;
		flag=-flag;
		sum+=1.0*flag*pow(x,i)/t;
		if(fabs(pow(x,i)/t)<e) break;
	}
	return sum;
}
