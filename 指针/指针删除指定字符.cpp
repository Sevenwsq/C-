#include<stdio.h>
char *delchar(char s[], char c); 
int main(void) 
{
	char s[81];
	gets(s);
	char c;
	scanf("%c",&c);
    delchar(s,c);
    printf("%s",s);
	return 0; 
}
char *delchar(char s[], char c)
{
	int i=0,j;
		char *p=s;
		while(*p!='\0') 
	{
		if(*p==c) 
		{
			for(j=i;s[j]!='\0'; j++)
			{
				s[j]=s[j+1];
			}
		}
		i++;
		p++;
	}
	s[i]='\0';
	return s;
}
