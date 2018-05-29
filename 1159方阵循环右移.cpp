#include<stdio.h>
int main(void){
	int arr[10][10],a[10][10];
	int i,j;
	int m,n;
	scanf("%d%d",&n,&m); 
	for(i = 0; i < m; i++)
		for(j = 0; j < m; j++)
			scanf("%d",&arr[i][j]);
			
	for(i = 0; i < m; i++){
		for(j = 0; j < m; j++){
			if(m-n>j)
			a[i][j+n] = arr[i][j];
			else
			a[i][j-1] = arr[i][j];
		}
	}
		
	for(i = 0; i < m; i++){
		for(j = 0; j < m; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}		
			
			
	return 0;		 
} 


