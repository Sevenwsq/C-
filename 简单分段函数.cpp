#include<stdio.h>
int main(void)
{
	float x;
	double y;
	scanf("%f",&x); 
	if(x!=0)
	y=1/x;
	printf("f(%.1f)=%.lf",x,y);
	return 0;
}
