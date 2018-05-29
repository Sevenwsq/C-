#include<stdio.h>
int main(void)
{
	double num;
	printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");
	scanf("%lf",&num);
	if(num==1)
	{
		printf("price = 3.00\n");
	}
	if(num==2)
	{
		printf("price = 2.50\n");
	}
	if(num==3)
	{
		printf("price = 4.10\n");
	}
	if(num==4)
	{
		printf("price = 10.20\n");
	}
	if(num==0)
	{
		printf("price = 0.00\n");
	}
	return 0;
}
