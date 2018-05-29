#include<stdio.h>
struct book
{
	char name[30];
	double price; 
};
int main(void)
{
	struct book s[10];
	int i,j,n;
	int max=0,min=0;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
{
	gets(s[i].name);	
	scanf("%lf",&s[i].price);
	getchar();
}
	for(i=1;i<n;i++)
	{
		if(s[i].price>s[max].price) max=i;
		if(s[i].price<s[min].price) min=i;
	}
	printf("%.2lf, %s\n",s[max].price,s[max].name);
	printf("%.2lf, %s",s[min].price,s[min].name);
	return 0;
}
