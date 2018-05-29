#include<stdio.h>
int main(void)
{
	int m,n,s,t,i,j;
	double result;
	s=1;
	t=1;
	scanf("%d%d",&m,&n);
	for(i=1;i<=n;i++)
	{
		s=s*i;
	}
	for(j=1;j<=(n-m);j++)
	{
		t=t*j;
	}
	result=s/(m*t);
	printf("result = %.0lf",result);
	return 0;
}
