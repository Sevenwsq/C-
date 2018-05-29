/*#include<stdio.h>
#include<math.h>
double PI(double e)
{
	int i=1;
	double sum=0;
    while(1.0/(2*i-1)>e)
	{
		sum=sum+pow(-1,i-1)*1.0/(2*i-1);
		i++; 
	}
	sum=sum*4;
	return sum;
}
int main(void)
{
	double p;
	scanf("%lf",&p);
    printf("%lf",PI(p));
    return 0;
}*/
#include<stdio.h>
#include<math.h>
double PI(double e)
{
int i=1;
double sum=0;
for(i=1;;i++)
{
sum=sum+pow(-1,i-1)*1.0/(2*i-1);
if(1.0/(2*i-1)<e) break;
}
sum=sum*4;
return sum;
}
int main(void)
{
double p;
scanf("%lf",&p);
    printf("%lf",PI(p));
    return 0;
}


