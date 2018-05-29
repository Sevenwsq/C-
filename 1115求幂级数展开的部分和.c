#include<stdio.h>
#include<math.h>
int main(void) 
{
    float x,n;
	float sum=1,t=1;
	scanf("%f",&x);
	for(n=1;pow(x,n)/t>0.00001;n++) 
	{
		t=t*n;
		sum+=pow(x,n)/t;
	}
	printf("%.4f",sum);
}
