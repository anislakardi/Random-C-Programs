#include<stdio.h>
int** ans(int** matrix);
int main(){
	
	int matrix1[2][2];
	
	matrix1=ans(matrix1);
	int m=0,n=0;
	for(m=0;m<2;m++){
		for(n=0;n<2;n++){
			printf("mat %d \n",matrix1[m][n]);
			
		}
	}
	
	
	return 0;
}
int** ans(int** matrix){
		int i=0,j=0;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter line %d,colon %d: ",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
	return matrix;
}
