#include <stdio.h>
#include <string.h>
int main() {
	char a[50],ch;
	int i,j;
	ch=getchar();
	getchar();
	gets(a);
	for(i=0,j=0;i<strlen(a);i++)
		if(a[i]!=ch)
			a[j++]=a[i];
	a[j]='\0';
	puts(a);
	return 0;
}

