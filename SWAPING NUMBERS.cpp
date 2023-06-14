#include<stdio.h>
int readX();
int readN();
int digit(int);
int power(int);
int swaping(int,int);
void print(int);
int main(){
	int X= readX();
	int N= readN();
	print(swaping(N,X));
	return 0;
}
int readN(){
	int n;
	printf("Enter N: ");
	scanf("%d",&n);
	return n;
}
int readX(){
	int x;
	printf("Enter X: ");
	scanf("%d",&x);
	return x;
}
int digit(int x){
	int d=0;
	while(x!=0){
		x=x/10;
		d++;
	}
	return d;
}
int power(int num){
	int i,p=1;
	for(i=0;i<num;i++){
		p=p*10;
	}
	return p;	
}
int swaping(int n,int x){
	int i,d,c,new_num=0;
	d=digit(x);
	c=d-n;
	c=power(c);
    new_num=x/c;
    x=x%c;
    new_num=new_num+(x*power(n));
    return new_num;
}
void print(int new_num){
	printf("X after swaping: %d",new_num);
}
