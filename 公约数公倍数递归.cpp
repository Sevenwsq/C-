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
	printf("���Լ���ǣ�%d\n��С�������ǣ�%d\n",p,l);
}
  
 
