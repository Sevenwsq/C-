/*��Ŀ����
����2��������lower��upper��lower��upper��100���������һ��ȡֵ��ΧΪ[lower��upper]����ÿ������2���϶ȵĻ���-�����¶�ת����
�¶�ת���ļ��㹫ʽ��C=5��(F-32)/9�����У�C��ʾ�����¶ȣ�F��ʾ�����¶ȡ�
����
��һ��������2���������ֱ��ʾlower��upper��ֵ���м��ÿո�ֿ���
���
��һ�������"fahr celsius:"
����ÿ�����һ�������¶�fahr�����ͣ���һ�������¶�celsius��ռ��6���ַ���ȣ����Ҷ��룬����1λС������
������ķ�Χ���Ϸ��������"Invalid."��
��������
32 35
�������
fahr celsius:
32   0.0
34   1.1*/

#include<stdio.h>
int main(void)
{
	int lower,upper;
	int fahr;
	double celsius;
	scanf("%d %d",&lower,&upper);
		
		if(lower<=upper&&upper<=100&&lower>0&&upper>0)
	{	printf("fahr celsius:\n");
	
		for(fahr=lower;fahr<=upper;fahr+=2)
	{
	    celsius=5.0*(fahr-32)/9.0;
		printf("%d%6.1lf\n",fahr,celsius);	
	}
    }
	else
	{
		printf("Invalid.");
	} 
    return 0;
}
