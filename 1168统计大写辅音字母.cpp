#include<stdio.h>
int main(void)
{
	char c;
	int count=0;
	while((c=getchar())!='\n')
	{
		if((c>='A'&&c<='Z')&&c!='A'&&c!='E'&&c!='I'&&c!='O'&&c!='U')
		count++;
	}
	printf("%d",count);
	return 0;
}
