#include<stdio.h>
int main()
{
const char *month[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
int n;
scanf("%d",&n);
if(n>=1&&n<=12)
printf("%s",month[n-1]);
else
printf("wrong input!");
return 0;
}

