#include<stdio.h>
int main(void)
{
	int m,n,t,i,p;
	scanf("%d%d",&m,&n);
	if(m>0&&n>0&&n<=1000)
	{
		if(m<n)
	{
		t=m;
		m=n;
		n=t;
	}
	for(i=n;i>0;i--)
	{
		if(m%i==0&&n%i==0)
	    {   	p=m*n/i;
	    	printf("%d %d",i,p);break; 
			}
	}
}
return 0;
}

