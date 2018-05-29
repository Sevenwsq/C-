#include<stdio.h>
int main(void)
{
	char a[15];
	int i=0;
	int letter=0,blank=-1,degit=0,other=0;
	while((a[i]=getchar())!=EOF)
	i++;
	a[i]='\0';
	for(i=0;a[i]!='\0';i++)
		{
		if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
		letter++;
		else if(a[i]==' '||a[i]=='\n')
		blank++;
		else if(a[i]>='0'&&a[i]<='9')
		degit++;
		else
		other++;
	}
	printf("letter = %d, blank = %d, degit = %d, other = %d",letter,blank,degit,other);
	return 0;
}
