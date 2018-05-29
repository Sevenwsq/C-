#include<stdio.h>
int main()
{
	int n,i;
	double h;
	scanf("%lf",&h);
	scanf("%d",&n);
	double sum=h,t;
	for(i=1;i<n;i++)
	{
		h=h/2*1.0;
		sum=sum+h*2*1.0;
		
	}
	t=h/2*1.0;
	printf("%.1lf %.1lf",sum,t);
	return 0;
 } 

