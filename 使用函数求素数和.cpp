#include <stdio.h>
#include <math.h>
int prime( int p );
int PrimeSum( int m,int n );
int main()
{
    int m, n, p;
    scanf("%d %d", &m, &n);
    printf("Sum of( ");
    for(p=m;p<=n;p++) 
	{
        if( prime(p)!= 0 )
            printf("%d ", p);
    }
    printf(")=%d\n", PrimeSum(m, n));
    return 0;
}
int PrimeSum( int m, int n )
{
   	int j,sum=0;
   	for(j=m;j<=n;j++)
    {
	if( prime(j)==1)
    {sum+=j;
	}
	}
    return sum;


}
int prime( int p )
{
      int i;
     if(p>=2)
	{
      	for(i=2;i<sqrt(p);i++)
		if(p%i==0)break; 
	}
	    if(i>sqrt(p))
		return 1;
		else
		return 0;	
	
}

