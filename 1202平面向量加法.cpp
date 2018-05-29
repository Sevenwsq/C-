#include<stdio.h>
int main(void)
{
	int a,b,c,d,x,y;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>0&&b<100&&c<100&&d<100) 
	{
		x = a*b;
		y = c*d;
	}
	if(y>x) printf("%d",y-x);
	else printf("%d",x-y);
	return 0;
}
