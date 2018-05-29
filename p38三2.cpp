#include <stdio.h>
int main(void)
{
	int num1,num2,num3;
	double average;
	scanf("%d%d%d",&num1,&num2,&num3);
	average=(num1+num2+num3)/3.0;
	printf("%.2lf",average);
	return 0;
}
