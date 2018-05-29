#include<stdio.h>
int main(void)
{
	int u[20];//全集 
	int a[20];//全集的子集 
	int i, j, flag = 0;
	int m, n;
	scanf("%d", &m);
	for(i = 0; i < m; i++)
		scanf("%d", &u[i]);
	scanf("%d", &n);
	for(j = 0; j < n; j++)
		scanf("%d", &a[j]);
	
	for(i = 0; i < m; i++)
	{
		flag = 1;
		for(j = 0; j < n; j++)
		{
			if(u[i] == a[j])
			{
				flag = 0;
			 
			}
		}
		if(flag == 1)
		{
			printf("%d ", u[i]);//输出子集在全集中的补集（空集不输出）
		}
	}
	return 0; 
 } 
