#include<stdio.h>
int main(void)
{
	int a[4];
	char si[4];
	int i=0,sta,flag=1;
	scanf("%d",&sta);
while(flag)
	{
		scanf("%c",&si[i]);
		if(si[i] == '=') break;
		scanf("%d",&a[i]);
		if(si[i] == '+') sta+=a[i];
		if(si[i] == '-') sta-=a[i];
		if(si[i] == '/') sta/=a[i];
		if(si[i] == '*') sta*=a[i];
	
		i++;
	}
	printf("%d",sta);
 } 
