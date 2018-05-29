#include<stdio.h>
int main(void)
{
	int nums[10];
	int i,j,k=1,count=0,sum=10;
	int index;
	for(i=0;i<10;i++) nums[i]=i+1;
	for(i=-1;k<10;k++)//k用来计算循环次数、打破循环 
	{
		for(j=1;j<=3;)
		{
			i=(i+1)%10;//把十个数绕成环 
			if(nums[i]!=0)
				j++;
		}
		nums[i]=0;
	}
	for(i=0;i<10;i++)
	if(nums[i]!=0)
	printf("%d ",nums[i]);
	return 0;
 } 
