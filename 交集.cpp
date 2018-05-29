#include<stdio.h>
int main() 
{
	int a[40];
	int b[40];
	int c[80];
	int n,m,count=0,i,j,t,index;
	scanf("%d",&n);
	for(i=0;i<n;i++) 	
	{
		scanf("%d",a+i);
	}
	scanf("%d",&m);
	for(i=0;i<m;i++) 	
	{
		scanf("%d",b+i);
	}
	for(i=0;i<n;i++) { 
		for(j=0;j<m;j++) 		
		{
			if(a[i]==b[j]) 			
			{
			    c[count] = a[i];
			    count++;
			}
		}
	}
	 for(i=0;i<count;i++)
	 printf("%d ",c[i]);
	return 0;
}



