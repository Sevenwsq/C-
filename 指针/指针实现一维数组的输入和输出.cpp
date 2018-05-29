#include<stdio.h>
int main(void)
{
	int i,a[10],*p;
	for(p=a;p<a+10;p++)
	scanf("%d",p);
	for(p=a;p<a+10;p++)
	printf("%d ",*p);
	printf("\n");
	p=a+5;				//把使p指向数组的第六个数字所以最后的*p=数组的第六位数字 
	for(i=0;i<5;i++)
	printf("%d ",*p+i); //和第十五行输出数据无差别 
	printf("\n");
	for(i=0;i<5;i++) 
	printf("%d ",p[i]);
	printf("\n");
	printf("%d",*p+2*i); //在上面的for循环中i的值变为了5；这一个printf打印的是*p加上2乘以i的值 
	return 0;
 } 
