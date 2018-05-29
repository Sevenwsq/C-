#include <stdio.h> 
int factorsum(int number);
void PrintPN(int n);
int main()
{
    int i,n;
    scanf("%d",&n);
    PrintPN(n);
    return 0;
}
int factorsum(int number)
{
	int i,s=0;
	if(number>=2){
	for(i=1;i<number;i++)
	{
		if(number%i==0) s+=i;
	}}
	if(number==1) s=1;
	return s;
}
void PrintPN(int n)
{
	int i,a,num[10],c=0,d=0,e=0;
	for(i=2;i<=n;i++)
	{
		if(factorsum(i)==i&&i>=2) {
		c=0;d=0;
		for(a=1;a<i;a++)
		{
			if(i%a==0) {num[c]=a;c++;}
		}
		printf("%d=1",i);
		for(d=1;d<c;d++)
		{
		printf("+%d",num[d]);
		}printf("\n");e++;
		}
	}
}

