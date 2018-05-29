#include <stdio.h>
#define N 100
int main() 
{
    int Data[N],i,sum=0;
    i=0;
	do {
		scanf("%d", &Data[i]);
		if(Data[i]%2==1)
		sum+=Data[i];

	} while(Data[i++]>0);
    printf("%d\n", sum);
    return 0;
}
