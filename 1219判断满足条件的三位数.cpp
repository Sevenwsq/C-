#include <stdio.h>
#include <math.h>
int search( int n );
int main()
{
    int number;
    scanf("%d",&number);
    printf("count=%d\n",search(number));
    return 0;
}
int search( int n )
{
	int i,t;
	int count=0;
	for(i=101;i<n;i++)
	{
		t=sqrt(i);
		if(t*t==i)
		count++;
	}
	return count;
 } 


