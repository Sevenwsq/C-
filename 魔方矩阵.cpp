/*每一行每一列及对角线之和均相等*/
#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int array[16][16];
	int i,j,k,m,n;
	//变量初始化
	m=1;
	while(m==1) {
		printf("请输入n(0<n<+15),n是奇数");
		scanf("%d",&n);
		//判断n是否为大于0小于等于15的奇数
		if((n!=0)&&(n<=15)&&(n%2!=0)) {
			printf("矩阵阶数是%d\n",n);
			m=0;
		}
	}
	//数组赋初值为0
	for(i=0; i<=n; i++)
		for(j=0; j<=n; j++)
			array[i][j]=0;
	j=n/2+1;
	array[1][j]=1;
	for(k=2; k<=n*n; k++) {
		i=i-1;
		j=j+1;
		if(i<1&&j>n) {
			i=i+2;
			j=j-1;
		} else {
			if(i<1)
				i=n;
			if(j>n)
				j=1;
		}
		if(array[i][j]==0)
			array[i][j]=k;
		else {
			i=i+2;
			j=j-1;
			array[i][j]=k;
		}
	}
	//输出魔方矩阵
	for(i=1; i<=n; i++) {
		for(j=1; j<=n; j++)
			printf("%5d",array[i][j]);
		printf("\n");
	}
	system("pause");
	return 0;
}
