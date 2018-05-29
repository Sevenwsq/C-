/*题目描述
本题要求统计给定整数M和N区间内素数的个数并对它们求和。
输入
输入在一行中给出两个正整数M和N（1≤M≤N≤500）。
输出
在一行中顺序输出M和N区间内素数的个数以及它们的和，数字间以空格分隔。
样例输入
10 31
样例输出
7 143
1094: 练习4-11 统计素数并求和*/
#include<stdio.h>
#include<math.h>
int main(void)
{
	int i,j,m,n;
	int count=0;
	int sum=0;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		for(j=2;j<=sqrt(i);j++)
		if(i%j==0)break;
		if(j>sqrt(i))
		{
			count++;
			sum=sum+i;
		}
	}
	printf("%d %d",count,sum);
	return 0;
}
