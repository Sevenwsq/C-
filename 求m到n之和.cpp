/*����Ҫ��ʵ��һ������m~n��m<n��֮�����������ĺ͵ļ򵥺���
����
m��n��ֵ
���
m~n��m<n��֮�����������ĺ�
��������
-5 8
�������
sum=21*/
#include<stdio.h> 
int main(void)
{
	int m,n,i;
	int sum=0;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
	   	sum+=i;
	}
	printf("sum=%d",sum);
	return 0;
}


