/*#include<stdio.h>
int main(void)
{
	int a[3][3],i,j;
	int (*p1)[3]=a;
	printf("������ת��ǰ�ľ���:\n");
	for(i=0;i<3;i++)
	{
		{
			for(j=0;j<3;j++)
			scanf("%d",(*(p1+i)+j));
		}
	}
	printf("ת�ú�ľ���Ϊ:\n"); 
  for(i=0;i<3;i++)
	{
		{
			for(j=0;j<3;j++)
			printf("%d ",*(*(p1+j)+i));
		}
		printf("\n");
	}
	return 0; 
}*/
#include<stdio.h>
int main()
{
	int a[10][10],n,i,j;
	int (*p)[10];
	void jzdzz(int (*p)[10],int n);
	printf("������n*n����Ľ���:\n");
	scanf("%d",&n);
	printf("������һ��%d*%d����:\n",n,n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	p=a;
	jzdzz(p,n);
	printf("ת�ú�ľ���Ϊ:\n");
	for(i=0;i<n;i++,printf("\n"))
		for(j=0;j<n;j++)
		{
			printf("%-3d ",*(*(p+i)+j));
		}
	return 0;
}
void jzdzz(int (*p)[10],int n)
{
	int i,j,t;
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		{
			t=*(*(p+i)+j);
			*(*(p+i)+j)=*(*(p+j)+i);
			*(*(p+j)+i)=t;
		}
}

