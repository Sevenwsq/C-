#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[100],x;
	int lon,i,n;
	printf("input:\n");
	scanf("%d %c\n%s",&n,&x,a);
	lon=strlen(a);
	printf("\n");
	for(i=lon-1; i>=n-1; i--)
		a[i+1]=a[i];
	a[n-1]=x ;
	a[lon+1]='\0';
	printf("%s\n",a) ;
}
