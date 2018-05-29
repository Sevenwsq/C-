#include<stdio.h>
#include<math.h>
int main(void)
{
	int i;
	int a,b,c;
	for(i=101;i<=999;i++)
	{
		a=i/100;
		b=(i%100)/10;
		c=i%10;
		if(i==pow(a,3)+pow(b,3)+pow(c,3))
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
