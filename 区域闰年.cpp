#include<stdio.h>
int main(void) 
{
	int year,n;
	scanf("%d%d",&n,&year);
	if(year%4==0&&year%100!=0)
	printf("%d",&year);

}
