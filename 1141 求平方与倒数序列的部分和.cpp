/*本题要求对两个正整数m和n（m ≤n）编写程序，计算序列和。
输入
输入在一行中给出两个正整数m和n（m ≤n），其间以空格分开。
输出
在一行中按照“sum=S”的格式输出部分和的值S，精确到小数点后六位。题目保证计算结果不超过双精度范围。
样例输入
5 10
样例输出
sum=355.845635*/
#include<stdio.h>
int main(void)
{
	double m,n,i;
	double s=0;
	scanf("%lf%lf",&m,&n);
    for(i=m;i<=n;i++)
    {
    		s+=i*i+1/i;
	}
	printf("sum=%lf",s);
	return 0;
}
