/*#include<stdio.h>
int main() {
	double s;
	int a[10000];
	int i,n,d;
	while(scanf("%d",&n))    
	{
		d=0;
		s=0;
		for(i=0; i<n; i++)           
		 scanf("%d",&a[i]);
		for(i=0; i<n; i++)            
		s+=a[i];
		s/=n;
		for(i=0; i<n; i++)            
		if(a[i]>=60) d++;
		printf("average=%.1lf\ncount=%d\n",s,d);
	}
	return 0;
}*/
#include<stdio.h>
int main(void)
{
	int i,n,count=0,num;
	double sum=0;
	scanf("%d",&n);

for(i =0;i<n; i++)

{
scanf("%d",&num);
sum+=num;
if(num>=60)
count++;
}
printf("average=%.1lf\ncount=%d",sum/n,count);
return 0;
}


