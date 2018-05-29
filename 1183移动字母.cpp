#include<stdio.h>
#include <string.h>
int main(void)
{
	char s[20];
	char c[20];
	int i;
	scanf("%s",s);
	for(i=0;i<3;i++)
	{
		c[strlen(s)-3+i]=s[i];
	}
	for(i=3;s[i]!='\0';i++)
	{
		c[i-3]=s[i];
	}
	c[strlen(s)]='\0';
	printf("%s",c);
	return 0;
 } 
