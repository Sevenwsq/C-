// ջ����ջ�ͳ�ջ������˳��洢�ṹ�ϵ�ʵ�֡����к���pushsqstack�Ĺ�����ʵ����ջ����������popsqstack�Ĺ�����ʵ�ֳ�ջ������
#include "stdio.h"
#define m 100
typedef int datatype;
typedef struct{datatype s[m]; int top;}sqstack;
void pushsqstack(sqstack &stack, datatype x)
{
  if (stack.top==m-1) printf("The stack is overflow!"); 
else { 
stack.top=stack.top+1; 
stack.s[stack.top]=x; 
}
}
void popsqstack(sqstack &stack, datatype *y) 
{
  if (stack.top== -1) printf("The stack is overflow!"); 
else { 
*y=stack.s[stack.top]; 
stack.top=stack.top-1; 
}
}
main( )
{
  datatype y; 
sqstack stack={{1,2,3,4,5},4}; /* ��ʼ��stackջ�е�Ԫ�ؼ���ǰջ��ָ�� */
  pushsqstack(stack,100); 
pushsqstack(stack,200);
  popsqstack(stack,&y);
 printf("the first is %d\n",y);
  popsqstack(stack,&y);
printf("the second is %d\n",y);
  popsqstack(stack,&y);
printf("the third is %d\n",y);
}

