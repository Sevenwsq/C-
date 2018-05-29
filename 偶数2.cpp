#include<stdio.h>
int main(void)
{
	int num;
	printf("输入一个实数:");
	scanf("%d",&num);
	if(num%2==0)
	printf("这个数是偶数。");
	else
	printf("这个数是奇数。"); 
	return 0; 
}
