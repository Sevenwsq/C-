#include<stdio.h>
int main(void)
{
	int s[10];
	int i,j,t,n;
	scanf("%d",&n);
	if(n<=10)
	for(i=0;i<n;i++)
	scanf("%d",&s[i]);
	for(j=1;j<n-1;j++)
	{
		for(i=0;i<n;i++)
		{
			if(s[i]<s[i+1])
			{
				t=s[i];
				s[i]=s[i+1];
				s[i+1]=t;
			}
		}
	}
	printf("%d",s[0]);
		for(i=1;i<n;i++)
		printf("%2d",s[i]);
 } 
 
