#include <stdio.h>
int main (void)
{
	int a=1,b=2,c=3;
	switch(a)
{
	case 0: a++; break;
	case 1: b++; break;
	case 2: b++; break;
}
    printf("a=%d b=%d c%d",a,b,c);
    return 0;
}
