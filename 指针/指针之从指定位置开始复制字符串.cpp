/*��һ���ַ���������n���ַ���дһ������
�����ַ����дӵ�m���ַ���ʼ��ȫ���ַ����Ƴ�Ϊ��һ���ַ���*/
#include<stdio.h>
#include<string.h>
void strmcyp(char*p1,char*p2,int m);
int main(void)
{
	int m;
	char str1[20],str2[20];
    gets(str1);
    scanf("%d",&m);
	getchar();
	strmcyp(str1,str2,m);
	if(strlen(str1)<m)
		printf("The number that you input is wrong!\n");
	else
		puts(str2);
    return 0;
}
void strmcyp(char*p1,char*p2,int m)
{
	int n=0;
	while(n<m-1)
	{
		n++;
		p1++;
	}
	while(*p1!='\0')
	{
        *p2=*p1;
		p1++;
		p2++;
	}
	*p2='\0';
}



