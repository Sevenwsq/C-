#include<stdio.h>
int main(void)
{
	int u[20];//ȫ�� 
	int a[20];//ȫ�����Ӽ� 
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
			printf("%d ", u[i]);//����Ӽ���ȫ���еĲ������ռ��������
		}
	}
	return 0; 
 } 
