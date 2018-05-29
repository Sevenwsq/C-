#include<stdio.h>
int main(void) {
	int num1,num2,sum,difference,product,quotient;
	scanf("%d %d",&num1,&num2);
	sum=num1+num2;
	printf("%d + %d = %d\n",num1,num2,sum);
	difference=num1-num2;
    printf("%d - %d = %d\n",num1,num2,difference);
	product=num1*num2;
    printf("%d * %d = %d\n",num1,num2,product);
	quotient=num1/num2;
	printf("%d / %d = %d\n",num1,num2,quotient);
	return 0;
}
