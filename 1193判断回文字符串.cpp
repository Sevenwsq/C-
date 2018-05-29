#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[50];
	int i, flag = 1;
	scanf("%s",&s);
	for(i=0;i<strlen(s)/2;i++)
	{
		if(s[i] != s[strlen(s)-1-i]) 
			flag = 0;
	}
	if(flag)  
		printf("Yes\n");
    else
        printf("No\n");
    printf("%s\n", s);
    return 0;
}
