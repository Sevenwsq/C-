#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main(void)
{
	int i,j;
	int x=0;
	int y=5;
	int velocity_x=1;
	int velocity_y=1;
	int left=0;
	int right=40;
	int top=0;
	int bottom=20;
	while(1)
{
	x=velocity_x+x;
	y=velocity_y+y;
	system("cls") ;
	for (i=0;i<x;i++)
	printf("\n");
	for (j=0;j<y;j++)
	printf(" "); 
	printf("´ó¼ÒºÃ°¡\n");
	Sleep(50);
	if((x==top)||(x==bottom))
	velocity_x=-velocity_x;
	if((x==left)||(x==right))
	velocity_y=-velocity_y;
	
}
	
	return 0;
}
