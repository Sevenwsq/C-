#include<stdio.h>
int main(void)
{
	int fahr,Celsius;
    scanf ("%d",&fahr);
	Celsius=5*(fahr-32)/9;
	printf("Celsius=%d",Celsius);
	return 0;
}
