#include <stdio.h>
void Reverse(int n)
{
	if(n>0)
	{
		if(n%10==0) 
		Reverse(n/10); 
		else
	{
		printf("%d",n%10);
		Reverse(n/10);
	}
	}
	else if(n<0)
	{
		int m=-n;
		if(n%10==0)
		Reverse(n/10);
		else
	{
		printf("-%d",m%10);
		Reverse(m/10);
	}
	}
}
int main()
{
	int num;
	scanf("%d",&num);
	Reverse(num);
	printf("\n");
	return 0;
}

