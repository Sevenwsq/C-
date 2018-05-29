#include<stdio.h>
int main(void)
{
	int *p1,*p2,*p3,*p;
	int a,b,c;
	p1=&a;p2=&b;p3=&c;
	scanf("%d%d%d",p1,p2,p3);
	if(*p1>*p2)
	{
		p=p1;
		p1=p2;
		p2=p;
	 } 
	 	if(*p1>*p3)
	{
		p=p1;
		p1=p3;
		p3=p;
	 } 
	 	if(*p2>*p3)
	{
		p=p2;
		p2=p3;
		p3=p;
	 } 
	printf("%d %d %d",*p1,*p2,*p3);
	return 0;
}
