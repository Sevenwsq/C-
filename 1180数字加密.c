/*����һ����λ����������ܺ������
�����ǽ�����ÿһλ�ϵ����ּ�9��Ȼ�����10ȡ�࣬��Ϊ��λ�ϵ������֣�
���ǧλ��ʮλ�ϵ����ֻ�������λ�͸�λ�ϵ����ֻ�����
��ɼ��ܺ������λ����
��������1257��������9ȡ���õ�������0146���پ������λ�λ��õ�4601��*/
#include<stdio.h>
int main(void)
{
	int number;
	int a,b,c,d;
	int t,k;
	scanf("%d",&number);
	a=number/1000;
	b=number%1000/100;
	c=number%100/10;
	d=number%10;
	a=(a+9)%10;
	b=(b+9)%10;
	c=(c+9)%10;
	d=(d+9)%10;
	t=a;a=c;c=t;
	k=b;b=d;d=k;
	printf("The encrypted number is %d%d%d%d",a,b,c,d);
	return 0;
}
