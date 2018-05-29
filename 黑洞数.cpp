#include<stdio.h>
int main(void)
{
	int number,Asum,Isum;
	int a,b,c,count=1;
	int max,min,mid;
	scanf("%d",&number);
 while(number!=495) 
{       
	a=number/100;
	b=number%100/10;
	c=number%10;
	mid=a+b+c;
	max=a>b?a:b;
	max=max>c?max:c;
	min=a>b?b:a;
	min=min>c?c:min;
	mid=mid-min-max;
	Asum=max*100+mid*10+min;
	Isum=min*100+mid*10+max; 
	number=Asum-Isum;
	printf("%d: %d - %d = %d\n",count,Asum,Isum,number);
	count++;
}
	return 0;
}

