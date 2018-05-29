#include<stdio.h>
void print(int n)
{
	if(n==0) return;
	printf("%d",n%10);
	print(n/10);
} 
int main(void)
{
	int x;
	scanf("%d",&x);
	print(x);
	return 0;
}
