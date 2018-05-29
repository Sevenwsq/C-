/*题目描述
编写程序，计算交错序列 1-2/3+3/5-4/7+5/9-6/11+... 的前N项之和。
输入
输入在一行中给出一个正整数N。
输出
在一行中输出部分和的值，结果保留三位小数。
样例输入
5
样例输出
0.917*/
#include<stdio.h>
#include<math.h>
int main(void)
{
	int i,j,n;
	double sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		
			sum=sum+pow(-1,i-1)*i/(2*i-1);
	}
	printf("%.3lf",sum);
	return 0;
 } 
/* #include<stdio.h>  
int main()  
{  
    int n;  
    while(scanf("%d",&n)!=EOF)  
    {  
        int i;  
        double j,k;  
        double m=1;  
        j=1;  
        for(i=2;i<=n;i=i+1)  
        {  
            if(i%2==0)  
            {  
                j=j+2;  
                k=-i/j;  
            }  
            else  
            {     
                j=j+2;  
                k=i/j;  
            }  
            m=m+k;  
        }  
        printf("%.3lf\n",m);  
    }  */

