/*#include<stdio.h>
int main(void)
{
	int min,i,a[i];
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	for(i=1,min=a[0];i<5;i++)
	{
		if(a[i]<min)
		min=a[i];
	}
	printf("min = %d",min);
	return 0;
}*/
#include<stdio.h>
int main(void)
{
	int max,i,n,a[i];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=1,max=a[0];i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	printf("%d %d",max,i);
	return 0;
}
