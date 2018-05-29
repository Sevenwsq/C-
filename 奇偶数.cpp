#include<stdio.h>
int main()
{
	int number;
	printf("输入一个数: ");
	scanf("%d",&number);
	if(number%2==0)
	{
	    printf("这个数是偶数.  \n"); 
	}
	else
	{
		printf("这个数是奇数.");
	}
	return 0; 
}
