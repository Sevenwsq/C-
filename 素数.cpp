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

		printf("%d������\n",num);
	} else {
		printf ("%d��������\n",num);
	}
	return 0;
}

