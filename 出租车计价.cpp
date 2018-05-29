#include<stdio.h> 
int main(void)
{
	double p1,p2,p;
	int n;
	double s,t; 
	scanf("%lf%d",&s,&t);
	if(s<=3)
	p1=10;
	else if(s>3&&s<=10)
	p1=10+2*(s-3);
	else if(s>10)
	p1=24+3*(s-10);
	if(t<5) 
	{
		p2=0;
	}
	else if(t>=5) 
	{
		n=t/5;
		p2=n*2;
	}
	p=p1+p2;
	printf("%.lf\n",p);
	return 0;
}



