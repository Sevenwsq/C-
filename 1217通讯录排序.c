#include<stdio.h>
struct friend
{
	char name[20];
	int birth;
	char number[30];
 };
 int main(void)
 {
 	struct friend a[10],t;
 	int i,j,n,index;
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	{
 		scanf("%s%d%s",&a[i].name,&a[i].birth,&a[i].number);
	 }
	 for(i=0;i<n-1;i++)
	 {
	 	index=i;
	 	for(j=i+1;j<n;j++)
	 	{
	 		if(a[j].birth>a[index].birth)
	 		{
	 			index=j;
	 			if(index!=i)
	 			{
	 			t=a[i];
	 			a[i]=a[index];
	 			a[index]=t;
				 }
			 }
		 }
	 }
	 	for(j=n-1;j>=0;j--)
 	{
 		printf("%s %d %s\n",a[j].name,a[j].birth,a[j].number);
	 }
	 return 0;
  } 
