/*#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[30],t[80];
	int i,j;
	gets(str);
	for(i=0,j=0;str[i]!='\0';i++)
	{
		t[j]=str[i];
		j++; 
	}
	for(--i;i>=0;i--)
	{
		t[j]=str[i];
		j++;
	}
	t[j]='\0';
	puts(t);
	return 0;
 } */
 #include<stdio.h>
 #include<string.h>
 int main(void)
 {
 	char a[100];
 	gets(a);
 	int length=strlen(a);
 	for(int i=length-1;i>=0;i--)
 	printf("%c",a[i]);
 	return 0;
 }
