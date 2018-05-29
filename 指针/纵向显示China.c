#include<stdio.h>
int main(void)
{
	char *p="China";
	for(;*p!='\0';*p++)
	{
		printf("%c",*p);
		printf("\n");
	}
	return 0;
}
