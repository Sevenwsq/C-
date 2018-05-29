/*本题要求实现一个计算m~n（m<n）之间所有整数的和的简单函数
输入
m和n的值
输出
m~n（m<n）之间所有整数的和
样例输入
-5 8
样例输出
sum=21*/
#include<stdio.h> 
int main(void)
{
	int m,n,i;
	int sum=0;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
	   	sum+=i;
	}
	printf("sum=%d",sum);
	return 0;
}


