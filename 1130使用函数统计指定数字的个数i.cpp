#include <stdio.h>
#include<math.h>
int CountDigit(int number,int digit);
int main()
{
    int number,digit;
    scanf("%d %d",&number,&digit);
    printf("Number of digit %d in %d:%d\n",digit,number,CountDigit(number, digit));
    return 0;
}
int CountDigit(int number,int digit)
{
    int j=0,t;
    while(number!=0)
    {
        t=number;
        number=number%10;
        if(fabs(number)==digit)  j++;
        number=t/10;
    }
    return j;
}
    

