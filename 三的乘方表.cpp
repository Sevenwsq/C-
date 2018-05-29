#include<stdio.h>
#include<math.h>
int main(void)
{
	int i,j,s;
	scanf("%d",&j);
	for(i=0;i<=j;i++)
	{
		s=pow(3,i); 
		printf("pow(3,%d) = %d\n",i,s);
	}
	return 0;
}
