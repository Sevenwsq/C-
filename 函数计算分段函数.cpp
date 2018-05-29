#include<stdio.h>
int fen(int x)
{
	int y;
	if(x>0)
	y=2*x+1;
    if(x<0) 
	y=1-2*x;
	if(x=0)
	y=0;
	return y;
}
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d",fen(a));
}
