/*函数定义:int even( int n );  
其中函数even将根据用户传入的参数n的奇偶性返回相应值：
当n为偶数时返回1，否则返回0。
测试程序样例：*/
#include <stdio.h>
 int even( int n )
 {
 	if(n%2==0)
 	return 1;
 	else 
 	return 0;
 }
 int main(void)
 {
  int N, i,temp,s;
  s=0;
  scanf("%d", &N);
  printf("Sum of( ");
  for ( i=0; i<N; i++ ) 
  {
   scanf("%d", &temp);
   if ( even(temp)==0 )
   {
    printf("%d ", temp);
    s=s+temp;
   }
  }
  printf(")=%d\n", s);
  return 0;
 }
