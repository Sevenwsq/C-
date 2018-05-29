#include<stdio.h>
#define Max(a,b) (a>b) ?a:b
int main() 
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("max=%d",Max(a,b));
	return 0;
}
