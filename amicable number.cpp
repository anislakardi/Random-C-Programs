#include<stdio.h>

int read_number();
int sum_divisor(int);
bool is_amicable(int,int);
void printing(bool);

int main(){
	int first_number = read_number();
	int secend_number = read_number();
	bool amicable = is_amicable(first_number,secend_number);
	printing(amicable);
}

int read_number(){
	int number;
	do{
		printf("Enter a Positive Number: ");
		scanf("%d",&number);
	}while(number <=0);
	return number;
}
bool is_amicable(int number1,int number2){
	int sum1,sum2;
	sum1=sum_divisor(number1);
	sum2=sum_divisor(number2);
	if(sum1==number2 && sum2==number1){
		return 1;
	}
	else if(sum1!=number2 && sum2!=number1){
		return 0;
	}
}
int sum_divisor(int number){
	int sum=0,rest;
	for(int i=1;i<number;i++){
		rest=number%i;
		if(rest==0){
			sum=sum+i;
		}
	}
	return sum;
}
void printing(bool isamicable){
	if(isamicable==1){
		printf("Is Amicable Number");
	}
	else if (isamicable==0){
		printf("Is Not Amicable Number");
	}
}
