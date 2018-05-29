#include<stdio.h>
int main(void)
{
	int a[10];
	int i,index1=0,index2=0,n,min,max,temp,tamp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	min=a[0];
	for(i=1;i<n;i++)
{if(min>a[i])
	{
	    min=a[i];
		index1=i;
	}

}
	if(index1!=0)
	{
		temp=a[0];
		a[0]=a[index1];
		a[index1]=temp;	
	}
	max=a[0];
	for(i=1;i<n;i++)
{	if(max<a[i])
	{
		max=a[i];
		index2=i;
	}
}
    if(index2!=n-1)
    {
    	tamp=a[n-1];
		a[n-1]=a[index2];
		a[index2]=tamp;
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
}
