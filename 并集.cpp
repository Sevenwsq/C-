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
		for(i=0;i<n;i++) { //找出a数组中与b数组不同的数存入数组c
		for(j=0;j<m;j++) 		
		{
			if(a[i]==b[j]) 			
			{
				break;
			}
		}
		if(j==m) 		{
			c[count]=a[i];
			count++;
		}
	}
	for(i=0;i<m;i++)//找出b数组中与a数组不同的数存入数组c
	{ 
		for(j=0;j<n;j++) 		
		{
			if(b[i]==a[j]) 			
			{
				break;
			}
		}
		if(j==n) 		
		{
			c[count]=b[i];
			count++;
		}
	}
	for(i=0;i<n;i++) { //找出a数组中与b数组相同的数存入数组c
		for(j=0;j<m;j++) 		
		{
			if(a[i]==b[j]) 			
			{
				c[count]=a[i];
				count++;
			}
		}
	}
	 for(i=0;i<count;i++)
	 printf("%d ",c[i]);
	return 0;
}



