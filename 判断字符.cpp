/*��Ŀ����
����Ҫ���д��������10���ַ���ͳ������Ӣ����ĸ���ո��س��������ַ��������ַ��ĸ�����
����
����Ϊ10���ַ������һ���س���ʾ����������������ڡ�
���
��һ���ڰ���
letter=Ӣ����ĸ����,blank=�ո��س�����,digit=�����ַ�����,other=�����ַ�����
�ĸ�ʽ�����
��������
aZ &
09 Az
�������
letter=4,blank=3,digit=2,other=1*/
#include<stdio.h>
int main(void)
{
	char c;
	int i,letter=0,blank=0,digit=0,other=0;
	for(i=1;i<=10;i++)
   {
     c=getchar();
	{
		if(c>='a'&&c<='z'||c>='A'&&c<='Z')
		letter++;
		else if(c==' '||c=='\n')
		blank++;
		else if(c>='0'&&c<='9')
		digit++;
		else
		other++;
	 } 
	 }
	printf("letter=%d,blank=%d,digit=%d,other=%d",letter,blank,digit,other); 
	return 0;
}

