#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
int main(void)
{
	FILE * fp;
	char array[30];
	char ch;
	char t;
	char fname[50]; 
	int i = 0;
	printf("请输入文件路径和名称"); 
	scanf("%s", fname);
	getchar();
	fp = fopen(fname,"r+");
	if(fp == NULL)
	{
		printf("文件打开失败");
		exit(1); 
	 } 
	 while(!feof(fp))
	 {
	 	fgets(array,30,fp);
	 	printf("%s",array);
	 }
	 printf("\n");
	 while(1)
	 {
	 	printf("是否想输入文字保存在文件中? Y/N\n");
	 	scanf("%c",&t);
	 	if(t == 'N') break;
	 	printf("请输入："); 
		getchar();
		gets(array);
		fputs("\n",fp);
		fputs(array,fp);
	 }
	 
	fclose(fp);
	return 0;
 } 
