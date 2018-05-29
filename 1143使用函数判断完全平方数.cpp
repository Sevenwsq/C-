#include <stdio.h>
#include <math.h>
int IsSquare( int n );
int same(int n);
int main()
{
    int n;
    int i,count=0;
    scanf("%d",&n);
    for(i = 101; i <= n; i++)
    {
    	if(same(i)&&IsSquare(i))
		{
			count++;		
		}		
	}
	printf("count=%d\n",count);
    return 0;
}
int IsSquare( int n )
{
    int t;
    t = sqrt(n);
	if(t*t == n)
	return 1;
	else
	return 0;
 } 
int same(int n)
{
	int a,b,c;
	a=n/100;
	b=n%100/10;
	c=n%10;
	if(a==b) return 1;
	else if(a==c) return 1;
	else if(b==c) return 1;
	else return 0;
}

