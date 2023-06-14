#include<stdio.h>
int values(int,int,int);
int main(){
	int Number_1=4000;
	int Number_2=509;
	int Ruslt=7000392;
values(Number_1,Number_2,Ruslt);
	return 0;
}
int values(int num1,int num2,int rslt){
	int end=0,rslt1=0;
	while(rslt<=7999392&&end==0){
	num2=509;
	while(num2<=599&&end==0){
		num1=4000;
		while(num1<=94999&&end==0){
			num1=num1+1;
			if(num1%10000==4999){
				num1=(num1-999)+10000;
			}
		    rslt1=num1*num2;
            if(rslt1==rslt){
            printf("Number1=%d\n",num1);
		    printf("Number2=%d\n",num2);
		    printf("Ruslt=%d\n",rslt);
		    end=1;break;
			}
		 num1=num1+1;	
		}
		 num2=num2+10;
	}	              
    rslt=rslt+1000;	
	}
}
