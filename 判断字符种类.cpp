/*#include<stdio.h>
int main(void) {
	char x;
	scanf("%c",&x);
    if (x>='0'&&x<='9')
	printf("这个字符是数字。");
	else if(x>='A'&&x<='Z'||x>='a'&&x<='z')
			printf("这个字符是字母。");
			else if(x==' ')
			printf("空格"); 
			else
			printf("其他字符");
			return 0; 
	
}*/
#include<stdio.h>
int main(void)
{
	char c;
	int letter=0,number=0;
	
	while(c!='\n')
	{
		scanf("%c",&c);
	{
		if(c>='a'&&c<='z')
		letter++;
		if (c>='0'&&c<='9')
		number++;}
	}
	printf("letter=%d\nnumber=%d",letter,number);
	return 0;
}
