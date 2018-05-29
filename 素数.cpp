#include <stdio.h>
int main() {
	int a=0;
	int num=0;
	scanf("%d",&num);
	for(int i=2; i<num; i++) 
	{
		if(num%i==0) {
			a++;
		}
	}
	if (a==0) {

		printf("%d是素数\n",num);
	} else {
		printf ("%d不是素数\n",num);
	}
	return 0;
}

