/*#include "stdio.h"
main() {
	int a,b,c,max,min;
	scanf("%d%d%d",&a,&b,&c);
	{   
	    max=a;
		if (max<b) max=b;
		if (max<c) max=c;
		printf("max=%d\n",max);
	}
	{
	    min=a;
		if (min>b) min=b;
		if (min>c) min=c;
		printf("min=%d\n",min);
	}
	return 0;
}*/
/*#include<stdio.h>
int main(void)
{
	int a,b,c,max,min;
	printf("请输入三个整数：");
	scanf("%d%d%d",&a,&b,&c);
	max=(a>b?a:b)>c?(a<b?a:b):c;
	min=(a<b?a:b)<c?(a<b?a:b):c;
	printf("max=%d,min=%d",max,min);
	return 0; 
}*/
#include<stdio.h>
int main(void)
{
	int a,b,c,t;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		t=a;
		a=b;
		b=t;
	}	 
	 if(a>c)
	 {
	 	t=a;
	 	a=c;
	 	c=t;
	 }
	 if(b>c)
	{
		t=b;
		b=c;
		c=t;}
	 printf("%d->%d->%d",a,b,c);
	 return 0;
}
