#include<stdio.h>
int *max(int a[],int n)
{
	int i,*p;
	p=a;
	for(i=1;i<n;i++)
	if(a[i]>*p) p=a+i;
	return p;
}
int main()
{
	int a[10],*p;
	for(p=a;p<a+10;p++)
	scanf("%d",p);
	p=max(a,10);
	printf("%d\n",*p);
	return 0;
}
