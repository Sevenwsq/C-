#include <stdio.h>
void dectobin( int n );
int main()
{
    int n;
    while(scanf("%d", &n)==1)
	{
	    dectobin(n);
	 } 
    
    return 0;
}
void dectobin(int n)
{
	int r;
	r=n%2;
	if(n>=2)
	dectobin(n/2);
	r==0?'0':'1';
	printf("%d",r);
	return ;
}
