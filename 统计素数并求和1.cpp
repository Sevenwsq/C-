/*��Ŀ����
����Ҫ��ͳ�Ƹ�������M��N�����������ĸ�������������͡�
����
������һ���и�������������M��N��1��M��N��500����
���
��һ����˳�����M��N�����������ĸ����Լ����ǵĺͣ����ּ��Կո�ָ���
��������
10 31
�������
7 143
1094: ��ϰ4-11 ͳ�����������*/
#include<stdio.h>
#include<math.h>
int main(void)
{
	int i,j,m,n;
	int count=0;
	int sum=0;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		for(j=2;j<=sqrt(i);j++)
		if(i%j==0)break;
		if(j>sqrt(i))
		{
			count++;
			sum=sum+i;
		}
	}
	printf("%d %d",count,sum);
	return 0;
}
