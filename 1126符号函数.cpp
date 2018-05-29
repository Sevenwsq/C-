#include <stdio.h>
int sign( int x );
int main()
{
    int x;
    scanf("%d", &x);
    printf("sign(%d)=%d\n", x, sign(x));
    return 0;
} 
int sign( int x )
{
	int s;
	if(x>0)
	s=1;
	else if(x=0)
	s=0;
	else
	s=-1;
	return s;
} 
