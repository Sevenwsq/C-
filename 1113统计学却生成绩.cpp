#include<stdio.h>
int main(void)
{
	int i,n,g,a=0,b=0,c=0,d=0,e=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&g);
		if(g>=90) a++;
		if(g>=80&&g<90) b++;
		if(g>=70&&g<80) c++;
		if(g>=60&&g<70) d++;
		if(g<60) e++;
	}
	printf("%d %d %d %d %d",a,b,c,d,e);
	return 0;
}
