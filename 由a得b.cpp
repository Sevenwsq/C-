#include<stdio.h>
int main(void)
{
	int a,b;
	for(a=0;a<3;a++)
	{
		printf("a=%d:",a);
		for(b=0;b<4;b++)
		printf("b=%-4d",b);
		printf("\n"); 
	}
}
