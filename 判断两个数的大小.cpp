#include <stdio.h>
main()
{
	int m,n ,c;
	int max(int x,int y);
	printf("please input m,n:\n");
	scanf("%d,%d",&m,&n);
	c=max(m,n);
	printf("max=%d\n");
}
int max(int x,int y)
{
	int z;
	if(x>y)z=x;
	else z=y;
	return (z);
}
