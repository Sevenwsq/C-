#include <stdio.h>
int gcd( int x, int y )
{   
        	int m,n,r;
	if(x>y)
	{
		m=x;n=y;
	}
	else{
		m=y;n=x;
	}
		
	while((r=m%n)!=0)
	{
		n=r;m=n;
	}
	return n;
	}
int main()
{
    int x,y;
    scanf("%d %d", &x, &y);
    printf("%d\n", gcd(x,y));
    return 0;
}

