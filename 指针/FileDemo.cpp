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
	printf("�������ļ�·��������"); 
	scanf("%s", fname);
	getchar();
	fp = fopen(fname,"r+");
	if(fp == NULL)
	{
		printf("�ļ���ʧ��");
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
	 	printf("�Ƿ����������ֱ������ļ���? Y/N\n");
	 	scanf("%c",&t);
	 	if(t == 'N') break;
	 	printf("�����룺"); 
		getchar();
		gets(array);
		fputs("\n",fp);
		fputs(array,fp);
	 }
	 
	fclose(fp);
	return 0;
 } 
