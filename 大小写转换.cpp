#include<stdio.h>
int main(void)
{
	char c[81];
	int i=0;
	while((c[i]=getchar())!='#')
	i++;
	c[i]='\0';
	for(i=0;c[i]!='\0';i++)
	{
		if(c[i]>='A'&&c[i]<='Z')
		c[i]=c[i]+32;
		else if(c[i]>='a'&&c[i]<='z')
		c[i]=c[i]-32;
		else
		c[i]=c[i];	
	}
	puts(c);
 } 
