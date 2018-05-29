#include<stdio.h>
int calmax(int m,int n)
{
	if(m%n==0)
	return n;
	else
	calmax(n,m%n);
}
int main(void)
{
	int m,n;
	int p,l;
	scanf("%d%d",&m,&n);
	p=calmax(m,n);
	l=m*n/p;
	printf("最大公约数是：%d\n最小公倍数是：%d\n",p,l);
}
  
 
