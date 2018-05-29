/*输入一个四位数，将其加密后输出。
方法是将该数每一位上的数字加9，然后除以10取余，做为该位上的新数字，
最后将千位和十位上的数字互换，百位和个位上的数字互换，
组成加密后的新四位数。
例如输入1257，经过加9取余后得到新数字0146，再经过两次换位后得到4601。*/
#include<stdio.h>
int main(void)
{
	int number;
	int a,b,c,d;
	int t,k;
	scanf("%d",&number);
	a=number/1000;
	b=number%1000/100;
	c=number%100/10;
	d=number%10;
	a=(a+9)%10;
	b=(b+9)%10;
	c=(c+9)%10;
	d=(d+9)%10;
	t=a;a=c;c=t;
	k=b;b=d;d=k;
	printf("The encrypted number is %d%d%d%d",a,b,c,d);
	return 0;
}
