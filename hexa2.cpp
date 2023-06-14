#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int a,y,m,o,i,b,n;
	char hexa[8];
	printf("enter number: ");
	scanf("%d",&a);
	y=a;i=8;
	n=0;
	b=1;
	while(a!=0){
		o=a%16;
		a=a/16;
		printf("%d\n",o);
		switch(o){
			case 10:    hexa[i]='A'   ;break;
			case 11:      hexa[i]='B'  ;break;
			case 12:       hexa[i]='C' ;break;
			case 13:       hexa[i]='D' ;break;
			case 14:       hexa[i]='E' ;break;
			case 15:       hexa[i]='F' ;break;
			default: itoa(o,hexa,10);hexa[i]=o;break; 
		}
		b=b*10;
		n=n+1;
		i--;
		
	}
		printf("(%d) in decimal = (%s) in hexadecimal",y,hexa);
	return 0;
}
