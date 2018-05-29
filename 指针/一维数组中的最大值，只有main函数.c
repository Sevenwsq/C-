#include<stdio.h>
int main(void)
{
	int a[10],*p;
	int n,max;
	scanf("%d",&n);
	for(p=a;p<a+n;p++)
	scanf("%d",p);
	max=a[0];
    for(p=a;p<a+n;p++)
    {
    	if(*p>max) max=*p;
	}
	printf("%d",max);
	return 0;
 } 
