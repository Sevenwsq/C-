#include<stdio.h>
int main(void)
{
	int i,a[10],*p;
	for(p=a;p<a+10;p++)
	scanf("%d",p);
	for(p=a;p<a+10;p++)
	printf("%d ",*p);
	printf("\n");
	p=a+5;				//��ʹpָ������ĵ�����������������*p=����ĵ���λ���� 
	for(i=0;i<5;i++)
	printf("%d ",*p+i); //�͵�ʮ������������޲�� 
	printf("\n");
	for(i=0;i<5;i++) 
	printf("%d ",p[i]);
	printf("\n");
	printf("%d",*p+2*i); //�������forѭ����i��ֵ��Ϊ��5����һ��printf��ӡ����*p����2����i��ֵ 
	return 0;
 } 
