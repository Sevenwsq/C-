#include<stdio.h>
int main()
{
	int year,month,day,s=0;
	scanf("%d/%d/%d",&year,&month,&day);
	if(month==1) s=day;
	if(month==2) s=31+day;
	if(month==3) s=59+day;
	if(month==4) s=90+day;
	if(month==5) s=120+day;
	if(month==6) s=151+day;
	if(month==7) s=181+day;
	if(month==8) s=212+day;
	if(month==9) s=243+day;
	if(month==10) s=273+day;
	if(month==11) s=304+day;
	if(month==12) s=334+day;
	if(year%4==0&&year%100!=0||year%400==0) s=s+1;
	printf("%d",s);
	return 0;
}

