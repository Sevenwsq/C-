#include<stdio.h>
#include<string.h>
#define MAX_STRING 160
int main(void)
{
	char str[MAX_STRING]={0};
	int i=0;
	int length=0;
	int count=0;
	//puts("请输入一段字符串（单词之间用空格）：");
	gets(str);
	length=strlen(str);
	
	for(i=0;i<length;++i)
	{
		if(str[i]!=' ')
		{
			++count;
			while(str[i]!=' '&&str[i]!='\0')
			{
				++i;
			}
		}
	 } 
	 printf("%d",count);
	 return 0;
}
