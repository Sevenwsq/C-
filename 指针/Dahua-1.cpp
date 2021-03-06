#include<stdio.h>
#define MAXSIZE 20
#define ERROR 0
#define TRUE 1
#define false 0
#define OK 1
typedef int Status;
typedef int ElemType;
typedef struct {
	ElemType data[MAXSIZE];
	int length;
}SqList;
Status GetElem(SqList L, int i, ElemType *e)
{
	if(L.length == 0 || i<1 || i>L.length)
		return ERROR;
	else
		*e=L.data[i-1];
}
Status ListInsert(SqList *L, int i, ElemType e)
{
	int k;
	if(L->length == 0 || i<1 || i>L->length+1) return ERROR;
	if(i<=L->length)
	{
		for(k=L->length-1;k>=i-1;k--)
			L->data[k+1] = L->data[k];
	}
	L->data[i-1] = e;
	L->length++;
	return OK;
 } 
Status ListDelete(SqList *L, int i, ElemType *e)
{
	int k;
	if(L->length==0 || i<1 || i > L->length) return ERROR;
	*e = L->data[i-1];
	if(i<=L->length)
	{
		for(k=i;k<L->length;k++)
			L->data[k-1] = L->data[k];
	}
	L->length--;
}
int main(void)
{
	SqList L;
	int i,e;
	scanf("%d",&L.length);
	for(i=0;i<L.length;i++)
		scanf("%d",&L.data[i]);
	GetElem(L,1,&e);
	printf("%d\n",e);
	ListInsert(&L,3,100);
	for(i=0;i<L.length;i++)
	printf("%d ",L.data[i]);
	printf("\n");
	ListDelete(&L,1,&e);
	for(i=0;i<L.length;i++)
	printf("%d ",L.data[i]);
	printf("\n");
	printf("ɾ��Ԫ�ص�ֵ=%d\n",e);
	return 0;
 } 
