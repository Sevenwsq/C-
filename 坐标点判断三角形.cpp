#include<stdio.h>
#include<math.h>
int main(void)
{
	double x1,y1,x2,y2,x3,y3;
	double a,b,c,p,L,A;
	scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
    a=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    b=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
	c=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
	if((y3-y1)/(x3-x1)==(y2-y1)/(x2-x1))
	{
	printf("Impossible");
	return 0;	
	}
	if(x1==x2&&x2 ==x3||y1==y2&&y2==y3)
	{
	printf("Impossible");
	return 0;
    }
	if (a+b>c&&a-b<c)
	{
	L=a+b+c;
	p=L/2;
	A=pow((p*(p-a)*(p-b)*(p-c)),0.5);
	printf("L=%.2lf, A=%.2lf",L,A);
	}
	else
	{
	printf("Impossible");
    }
	return 0;
	
}
