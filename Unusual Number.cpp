#include<stdio.h>
#include<math.h>
bool isprime(int);

int main(){
	int i,r,max_factor=0,number;
	bool yes;
	printf("Enter Number: ");
	scanf("%d",&number);
	for(i=1;i<number;i++){
		r=number%i;
			if(r==0){
				yes=isprime(i);
				if(yes==1){
					
					if(i>max_factor){
						max_factor=i;
					}
				}
			}
			
			}
	if(max_factor>sqrt(number)){
		printf("%d is Unusual Number",number);
	}
	else{
		printf("%d is Not Unusual Number",number);
	}
	return 0;
}
bool isprime(int num){
	int j,rest;
	j=2;
	for(j=2;j<num;j++){
		rest=num%j;
		if(rest==0){
			return 0;
		}
	}
	if(rest==0){
		return 1;
		printf("%d",num);
	}
}
