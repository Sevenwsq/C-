#include<stdio.h>
int main(void)
{
int i,N,sum=0,num;

scanf("%d",&N);

for(i = 0; i < N; i++)

{

scanf("%d",&num);

sum+=num;

}

printf("%d",sum/N);
return 0 ;

}

