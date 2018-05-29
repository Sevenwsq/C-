/*#include<stdio.h>
int main(void)
{
	int a,b,c,d,Sum;
	double Average;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	Sum=a+b+c+d;
	Average=(a+b+c+d)/4.0;
	printf("Sum=%d,Average=%.1lf\n",Sum,Average);
	return 0;
}*/
#include<stdio.h>
int main(void)
{
	int a,b;
	double sum,diff;
	scanf("%d%d",&a,&b);
	sum=a+b;
	diff=a-b;
	printf("The sum is %.2lf\nThe diff is %.2lf\n",sum,diff);
	return 0;
}
