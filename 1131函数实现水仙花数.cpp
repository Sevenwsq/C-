#include <stdio.h>
#include<math.h>
int narcissistic( int number );
void PrintN( int m, int n );
int main() 
{
	int m, n;
	scanf("%d %d", &m, &n);
	if ( narcissistic(m) ) 
	printf("%d is a narcissistic number\n",m);
	PrintN(m, n);
	if (narcissistic(n)) 
	printf("%d is a narcissistic number\n",n);
	return 0;
}
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
void PrintN( int m, int n ) 
{
	int i;	
	for(i=m+1;i<n;i++) 
	{
		if(narcissistic(i)==1)
		printf("%d\n",i);
	}
}
