#include <stdio.h>
int main(void) {
	int index=0,i=0,j;
	char ch[80];
	while((ch[i]=getchar())!='\n')
		i++;
	ch[i]='\0';
	for(i=0; ch[i]!='\0'; i++)
	{
		if(ch[i]>='A'&&ch[i]<='Z')
		{
		   ch[i]=155-ch[i];	//A的ASCII码值为65；Z的ASCII值为90； 
		}
	}
		for(j=0;j<i;j++)
		printf("%c",ch[j]);
	return 0;
}
