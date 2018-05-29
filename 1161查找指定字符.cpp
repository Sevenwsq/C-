#include <stdio.h>
int main(void) {
	int index=0,flag,i=0;
	char ch[80],c;
	flag=0;
	scanf("%c",&c);
	getchar(); 
	while((ch[i]=getchar())!='\n')
		i++;
	ch[i]='\0';
	for(i=0; ch[i]!='\0'; i++)
		if(c==ch[i])
		{
			index=i;
			flag=1;
		}
	if(flag==1)
		printf("index = %d",index);
	else printf("Not Found");
return 0; 
}

