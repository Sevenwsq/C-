#include<stdio.h>
int Twonumbers1(int a,int b)
{
	int num;
	num=a+b;
	return num;
}
int Twonumbers2(int a,int b)
{
	int diff;
	diff=a-b;
	return diff;
}
int main()
{
	int num,diff,a,b;
	scanf("%d%d",&a,&b);
	num=Twonumbers1(a,b);
	diff=Twonumbers2(a,b);
	printf("%d\n%d",num,diff);
	return 0;
}

