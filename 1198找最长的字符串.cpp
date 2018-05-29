#include<stdio.h>
#include<string.h>
int main(void)
{
	char st[20],cs[20][20];
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%s",&cs[i]); 
	strcpy(st,cs[0]);
	for(i=0;i<n;i++)
	{
		if(strcmp(cs[i],st)>0)
		{
			strcpy(st,cs[i]);
		}
	}
	printf("The longest is: %s",st);
	return 0;
 } 
