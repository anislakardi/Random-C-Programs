#include<stdio.h>

int main(){
	int n,i=1,r,sum=0;
	printf("Enter N: ");
	scanf("%d",&n);
	printf("Aliquot sequence: %d",n);
	while(n!=1){
		i=1;sum=0;
		for(i=1;i<n;i++){
			r=n%i;
			if(r==0){
				sum=sum+i;
			}
		}
		n=sum;
		printf("   %d",n);
	}

	return 0;
}
