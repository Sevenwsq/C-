/*题目描述
按照规定，在高速公路上行使的机动车，超出本车道限速的10%(不包含)则处200元罚款；若超出50%(不包含)，就要吊销驾驶证。请编写程序根据车速和限速自动判别对该机动车的处理。
输入
输入在一行中给出2个正整数，分别对应车速和限速，其间以空格分隔。
输出
在一行中输出处理意见：若属于正常行驶，则输出“OK”；若应处罚款，则输出“Exceed x%.Ticket 200”；若应吊销驾驶证，则输出“Exceed x%.License Revoked”。其中x是超速的百分比，精确到整数。
样例输入
65 60
样例输出
OK
高速公路超速处罚*/
#include<stdio.h>
int main (void)
{
	double m,n,i;
	scanf("%lf%lf",&m,&n);
	if(m<=1.1*n)
{
		printf("OK");
}
    else if(m>1.5*n)
{
	i=(m-n)/n*100;	
	printf("Exceed %.lf%%.License Revoked",i);
}
   else
{
	i=(m-n)/n*100;	
	printf("Exceed %.lf%%.Ticket 200",i);
}
return 0;
}
