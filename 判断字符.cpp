/*题目描述
本题要求编写程序，输入10个字符，统计其中英文字母、空格或回车、数字字符和其他字符的个数。
输入
输入为10个字符。最后一个回车表示输入结束，不算在内。
输出
在一行内按照
letter=英文字母个数,blank=空格或回车个数,digit=数字字符个数,other=其他字符个数
的格式输出。
样例输入
aZ &
09 Az
样例输出
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

