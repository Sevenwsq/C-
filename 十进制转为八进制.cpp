#include<stdio.h>
#define Width 100000
long long Demo(long long number);
int main(void){
    long long i,length,numbers;
    long long arr[Width];
    scanf("%d", &length);
        for(i = 0; i < length; i++){
            scanf("%lld", &numbers);
            arr[i] = Demo(numbers);
        }
    for(i = 0; i < length-1; i++)
        printf("%lld\n", arr[i]);
        printf("%lld",arr[length-1]);
}
long long Demo(long long number){
    long long sum = 0;
    long fac = 1;
    for(long long i = 1; i <= number; i++){
        fac *= i; 
    }
    while(fac > 0){
        fac = fac/8;
        sum++;
    }
    return sum;
}
