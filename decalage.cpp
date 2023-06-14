#include<stdio.h>
int read_X();
int read_N();
int position_offset(int);
int DECALAGES(int,int);
void print(int);

int main(){
	int X= read_X();
	int N= read_N();
    print(DECALAGES(X,N));
	
	return 0;
}
int read_X(){
	int x;
	printf("Enter X: ");
	scanf("%d",&x);
	return x;
}
int read_N(){
	int n;
	printf("Enter N: ");
	scanf("%d",&n);
	return n;
}
int position_offset(int x){
	int position=1,i;
	while(x!=0){
		x=x/10;
		position=position*10;
	
	}
	position=position/10;
	return position;
}
int DECALAGES(int x,int n){
	int new_number=0,rest,i;
	int denominator=position_offset(x);
	for(i=0;i<n;i++){
		rest=x%10;
		
		printf("%d\n",rest);
		
		x=x/denominator;
		
		new_number=new_number+(rest*denominator);
		
		denominator=denominator/10;
	}
	new_number=new_number+x;
	return new_number;
}
void print(int new_number){
	printf("X after decalage: %d",new_number);
}


