#include<stdio.h>
bool ispositive(int);
bool isnegative(int);
int main(){
	int numbers[10];
	int i=0;
	for(i=0;i<10;i++){
		printf("Enter Number %d:  ",i+1);
		scanf("%d",&numbers[i]);	
		}
		i=0;
	for(i=0;i<10;i++){
		if(ispositive(numbers[i])==1){
			printf("  %d",numbers[i]);
		}
		}
		i=0;
		for(i=0;i<10;i++){
		if(isnegative(numbers[i])==1){
			printf("  %d",numbers[i]);
		}
		}
	return 0;
}
bool ispositive(int number){
	
	if(number>=0){
		return 1;
	}
	else{
		return 0;
	}
}
bool isnegative(int number){
	
	if(number<0){
		return 1;
	}
	else{
		return 0;
	}
}
