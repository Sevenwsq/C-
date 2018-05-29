/*#include<stdio.h>
int main(void)
{
	int n,i;
	scanf("%d",&n);
	if(n>2100||n<2000)
	printf("Invalid year!");
    if(n<=2100&&n>=2000)
	{
	for(i=n;--i;)
	if(i%4==0&&i%100!=0&&i>2000)
	printf("%d\n",i);
	else
	printf("None");
	}
}*/
#include <stdio.h>
int main(void) {
	int year, i;
	scanf("%d", &year);
	if(year < 2001 || year > 2100) 
		printf("Invalid year!\n");
	else {
			if(year<=2003)
		{
			printf("None\n");
			}
		for(i = 2001; i <= year; ++i) 
		if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
			
		{
		
				printf("%d\n", i);
		}
	
		}
			return 0;
	}


