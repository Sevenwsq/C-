#include<stdio.h>
int length(char *p); 
int main(void)
{
	char s[21];
	scanf("%s",&s);
	printf("����ַ����ĳ���Ϊ%d",length(s));
	return 0;
}
int length(char *p)
{
		int count=0;
		for(;*p!='\0';*p++)
	{
		count++;
	}
	return count;
}
