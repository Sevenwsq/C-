#include<stdio.h>
int main(void)
{
	int grade;
	char ch;
	scanf("%d",&grade);
	switch(grade/10)
	{
		case 10: ch='A'; break;
		case  9: ch='A'; break;
		case  8: ch='B'; break;
		case  7: ch='C'; break;
		case  6: ch='D'; break;
		default: ch='E'; break;
	}
	printf("%c\n",ch);
	return 0;
}
