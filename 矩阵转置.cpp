#include<stdio.h>
#define Length 7
#define Width  6
int main(void) {
	int i=0,j=0;
	int array1[Length][Width]= {0};
	int array2[Width][Length]= {0};
	//初始化数组array1的全部元素
	for(i=0; i<Length; i++)
		for(j=0; j<Width; j++) {
			array1[i][j]=2*i+j;
		}
	//输出数组array1的全部元素
	printf("转置前的矩阵为：\n");	
	for(i=0; i<Length; i++) {
		for(j=0; j<Width; j++) {
			printf("%3d",array1[i][j]);
		}
		printf("\n");
	}
	//实现矩阵的转置
	for(i=0; i<Width; i++) {
		for(j=0; j<Length; j++)
			array2[i][j]=array1[j][i];
	}
	//输出array2的全部元素
	printf("转置后的矩阵：\n");
	for(i=0; i<Width; i++) {
		for(j=0; j<Length; j++) {
			printf("%3d",array2[i][j]);
		}
		printf("\n");
	}
	return 0;
}


