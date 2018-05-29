// 栈的入栈和出栈操作在顺序存储结构上的实现。其中函数pushsqstack的功能是实现入栈操作，函数popsqstack的功能是实现出栈操作。
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
sqstack stack={{1,2,3,4,5},4}; /* 初始化stack栈中的元素及当前栈顶指针 */
  pushsqstack(stack,100); 
pushsqstack(stack,200);
  popsqstack(stack,&y);
 printf("the first is %d\n",y);
  popsqstack(stack,&y);
printf("the second is %d\n",y);
  popsqstack(stack,&y);
printf("the third is %d\n",y);
}

