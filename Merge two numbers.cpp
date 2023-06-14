#include<stdio.h>

int main(){
	int A[4];
	int B[4];
	int i=0;
	for(i=0;i<4;i++){
		printf("Enter Number %d of A: ",i+1);
		scanf("%d",&A[i]);
	}
	i=0;
		for(i=0;i<4;i++){
		printf("Enter Number %d of B: ",i+1);
		scanf("%d",&B[i]);
	}
	i=0;
	printf("C= ");
	for(i=0;i<4;i++){
    printf("%d",A[i]);
    printf("%d",B[i]);
	}
	return 0;
}
