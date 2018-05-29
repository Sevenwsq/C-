#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,num;
	char a[100];
	num=0;
	gets(a);
	n=strlen(a);
	for(int c=0;c<n;c++)
	{for(i=0;i<n/2;i++)
	{
		if(a[i+c]==a[n-1-i]) num=num+2;
	    if(a[i+c]!=a[n-1-i]) num=0;
	    if(i==n/2-1)
		{ 
		if(n%2==0) printf("%d",num);
		else printf("%d",num+1);
		 } 
		
	}
	}
	
	return 0;
}
