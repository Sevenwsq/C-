#include<stdio.h>
int main(void)
{
	int a[10];
	int i, n, p, k;
	int count[10];
	int max1 ,max2;
	int flag1, flag2;
	for(i=0;i<10;i++)
		count[i]=0;
	scanf("%d",&n);
	for(i = 0; i < n; i++)
		scanf("%d",&a[i]);
		i=n-1;
	while(i+1){
		p = a[i]%10;
		a[i] = a[i]/10;
		if(p==0) count[0]++;
		for(k=0;k<10;k++)
			if(p==k) count[k]++;
		if(a[i]==0) i--;
	}
	max1=count[0];
	max2=count[9];
	for(k=0;k<10;k++)
	{
		if(max1<count[k])
		{
			max1=count[k];
			flag1=k;
		}
	}
	for(k=9;k>=0;k--)
	{
		if(max2<count[k])
		{
			max2=count[k];
			flag2 = k;
		}
	}
	printf("%d: %d %d",max1, flag1, flag2);
 } 
