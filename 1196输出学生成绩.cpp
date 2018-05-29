#include <stdio.h>
int main() {
	int a[100];
	int i,n;
	scanf("%d",&n);
	for(i=0; i<n; i++) 
	{
		scanf("%d",&a[i]);
	}
	double max=a[0], min=a[0],sum=0;
	for(i=0; i<n; i++) 
	{
		sum=sum+a[i];
		if(max<a[i]) 
		{
			max=a[i];
		}
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("average = %.2lf\nmax = %.2lf\nmin = %.2lf\n",sum/n,max,min);
	return 0;
}
