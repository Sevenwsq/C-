#include<stdio.h>
int main(void)
{
	int d,h,m;
	int i;
	scanf("%d:%d:%d",&d, &h, &m);
	scanf("%d",&i);
	if(i+m>=60)
	{
		h+=1;
		m=i+m-60;
	}
	if(h==60) 
	{
		d+=1;
		h=0;
	}
	if(d==24) d=0;
	
	if(h==0&&m==0&&d==0) printf("00:00:00");
	else if(h==0&&m==0) printf("%d:00:00",d);
	else if(d==0&&m==0) printf("00:%d:00",h);
	else if(d==0&&h==0) printf("00:00:%d",m);
	else if(d==0)	printf("00:%d:%d",h, m);
	else if(h==0) 	printf("%d:00:%d",d, m);
	else if(m==0) 	printf("%d:%d:00",d, h);
	else
	printf("%d:%d:%d",d, h, m);
	
	return 0; 
}
