#include<stdio.h>
#include<stdlib.h>
int sstrcmp(char *p1,char *p2);
int main(void)
{
	int ret;
	char str1[80],str2[80];
	printf("ÇëÊäÈëÒ»¸ö×Ö·û´®£º");
	gets(str1);
	printf("ÇëÊäÈëÁíÒ»¸ö×Ö·û´®£º");
	gets(str2);
	ret=sstrcmp(str1,str2);
	printf("%d",ret);
	return 0;
 } 
 int  sstrcmp(char *p1,char *p2)
 {
 	while(*p1)
 	if(*p1-*p2)
 	return *p1-*p2;
 	else
 	{
 		p1++;
 		p2++;
	 }
 }
