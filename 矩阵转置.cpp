#include<stdio.h>
#define Length 7
#define Width  6
int main(void) {
	int i=0,j=0;
	int array1[Length][Width]= {0};
	int array2[Width][Length]= {0};
	//��ʼ������array1��ȫ��Ԫ��
	for(i=0; i<Length; i++)
		for(j=0; j<Width; j++) {
			array1[i][j]=2*i+j;
		}
	//�������array1��ȫ��Ԫ��
	printf("ת��ǰ�ľ���Ϊ��\n");	
	for(i=0; i<Length; i++) {
		for(j=0; j<Width; j++) {
			printf("%3d",array1[i][j]);
		}
		printf("\n");
	}
	//ʵ�־����ת��
	for(i=0; i<Width; i++) {
		for(j=0; j<Length; j++)
			array2[i][j]=array1[j][i];
	}
	//���array2��ȫ��Ԫ��
	printf("ת�ú�ľ���\n");
	for(i=0; i<Width; i++) {
		for(j=0; j<Length; j++) {
			printf("%3d",array2[i][j]);
		}
		printf("\n");
	}
	return 0;
}


