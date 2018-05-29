/*#include<stdio.h>
int main(void)
{
	int i,n,t;
	scanf("%d",&n);
	int s[n]={1,1};
	for(i=2;i<n;i++)
	s[i]=s[i-2]+s[i-1];
    for(i=0;i<n;i++)
    t=s[i];
    printf("%d",t);
	return 0;
 }*/
 
#include<stdio.h>
int fun(int n)
{  
    if(n<=2&&n>0)
	return 1;
	else
	return fun(n-1)+fun(n-2); 
 } 
 int main()
 {
 	int n;
 	scanf("%d",&n);
 	int i;
    printf("%d",fun(n));
 	 return 0;
 
 }

