#include <stdio.h>
int main(void)
{
	int number;
	printf("Enter a number: ");
	scanf("%d",&number);
	if(number%2==0)
	{
		printf("The number is even.\n");
	}
	if(number%2!=0)
	{
		printf("The number is odd.\n");
	}
	return 0;
}
