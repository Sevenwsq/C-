/*#include<stdio.h>
int main(void)
{
   int i,j;
   int a[10];
   int iTemp;
   int iPos;
   printf("Ϊ����Ԫ�ظ�ֵ��\n");
   for(i=0;i<10;i++)
   {
   	printf("a[%d]=",i);
   	scanf("%d",&a[i]);
   }
   for(i=0;i<9;i++)//�������ѭ��Ϊ�±�0~8��Ԫ�� 
   {
   	iTemp=a[i];//���õ�ǰ��Сֵ 
   	iPos=i;//��¼Ԫ��λ�� 
   	for(j=i+1;j<10;j++)//�ڲ�ѭ��i+1��9 
   	{
   		if(a[j]<iTemp)//�����ǰԪ�ر���Сֵ��С 
   		{
   			iTemp=a[j];//����������Сֵ 
   			iPos=j;//��¼Ԫ��λ�� 
		   }
	   }
	   //��������Ԫ�ص�ֵ
	   a[iPos]=a[i];
	   a[i]=iTemp; 
   }
   //�������
   for(i=0;i<10;i++) 
   {
   	printf("%d\t",a[i]);//����Ʊ�λ 
   	if(i==4)
   	printf("\n");
   }
   return 0;
}*/
#include<stdio.h>
int main()
{
	int n,i,j,index,temp,a[10];
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		index=i;
		for(j=i+1;j<n;j++)
			if(a[j]<a[index]) index=j;
			if(index!=i)
			{temp=a[i];a[i]=a[index];a[index]=temp;}
	}
	for(j=0;j<n;j++) printf("%d ",a[j]);
	printf("\n");
	return 0;
}

