#include<stdio.h>
#include<math.h>
int main(void)
{
	int i,n,count=0;
	int k,l;
	scanf("%d%d",&k,&l);
	for(n=k;n<=l;n++)
	{
		for(i=2;i<sqrt(n);i++)
		if(n%i==0)break;
	    if(i>sqrt(n)&&n%10%10==7)
		{
			printf("%5d",n);
			count++;
			if(count%4==0)printf("\n");
		 } 
	}
	return 0; 
}
