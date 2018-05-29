#include<stdio.h>
int main()
{
    int i =0;
    int a ;
    int n =0;
    scanf("%d",&a);
    scanf("%d",&n);
    int tmp =a;
    int sum = 0;
    for(i = 1; i<=n; i++)
	{
        sum += a;
        a = a * 10 + tmp;
    }
    printf("s = %d\n",sum);
}


