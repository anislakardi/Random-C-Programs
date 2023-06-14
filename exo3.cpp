#include<stdio.h>
int how_many_zero(int);

int main(){
	
	int number,zeros;
	printf("enter number: ");
	scanf("%d",&number);
	zeros=how_many_zero(number);
	
printf("the number %d contains %d zeros.",number,zeros);
	return 0;
}
int how_many_zero(int x){
	int zero_repeat=0,rest;

while(x!=0){

		rest=x%10;
		x=x/10;
		if(rest==0){
			zero_repeat=zero_repeat+1;
		}
		else{
			break;
			/*we stop at the last rest not zero*/
		}

}
return zero_repeat;
}
