#include<stdio.h>
int main(void)
{
	int a,b,c;
	printf("输入三个值：");
	scanf("%d%d%d",&a,&b,&c); 
	if (a+b>c&&a-b<c)
	printf("以这三个值作为三角形的边长可以构成三角形。");
	else
	printf("以这三个值作为三角形的边长无法构成三角形。");
	return 0; 
}
