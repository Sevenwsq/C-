#include<stdio.h>
#include<math.h>
int narcissistic( int number ) 
{
	int numbers,p;
	int n=0,t;
	numbers=number;
	while(numbers!=0) 
	{
		t=numbers;
	    numbers=t/10;
		n++;
	}
	int sum=0;
	p=number;
	int s;
	while(p!=0) 
	{
		s=p;
		p=s%10;
		sum+=pow(p,n);
		p=s/10;
	}
	if(sum==number)
		return 1;
	else
		return 0;
}
int min( int number) 
{
	int s;
	if(number==3) s=100;
	if(number==4) s=1000;
	if(number==5) s=10000;
	if(number==6) s=100000;
	if(number==7) s=1000000;
	
	return s;
}
int max( int number) 
{
	int s;
	if(number==3) s=999;
	if(number==4) s=9999;
	if(number==5) s=99999;
	if(number==6) s=999999;
	if(number==7) s=9999999;
	
	return s;
}
int main(void)
{
	int i;
	int number;
	int m,n;
	scanf("%d",&number);
	m=min(number);
	n=max(number); 
	for(i=m;i<=n;i++) 
	{
		if(narcissistic(i)==1)
		printf("%d\n",i);
	}
}
