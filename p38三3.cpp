#include <stdio.h>
#include<math.h>
int main(void)
{
	double radius,circumference,area;
	double PI=3.14;
	printf("enter radius:");
	scanf("%lf",&radius);
	circumference=2*PI*radius;
	area=PI*pow(radius,2);
	printf("area=%.2lf\ncirumference=%.2lf\n",area,circumference);
	return 0;
	 
}
