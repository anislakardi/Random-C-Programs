#include<stdio.h>
int read_number();
void divers(int);
int main(){
	int number=read_number();
	divers(number);
	return 0;
}
int read_number(){
	int num;
	printf("enter number: ");
	scanf("%d",&num);
	return num;
}
void divers(int num){
	int max_diviser=0,min_diviser=0,n=0;
	for(int counter=2;counter<num;counter++){
		int rest=num%counter;
		if(rest==0){
			if(n==0){
			min_diviser=max_diviser;
			n++;
			}
			if(counter>max_diviser){
				max_diviser=counter;
			}
			else if(counter<min_diviser){
				min_diviser=counter;
			}
		}
	}
	if(min_diviser==0 &&max_diviser==0){
		printf("%d DOESN'T HAVE DIVISERS");
	}
	else if(min_diviser!=0&&max_diviser!=0){
		printf("BIGGER DIVISER IS %d SMALLER DIVISER IS %d ",max_diviser,min_diviser);
	}
	else if(min_diviser!=0&&max_diviser==0||min_diviser==0&&max_diviser!=0){
		if(min_diviser!=0){
			printf("%d HAVE ONE DIVESER %d",num,min_diviser);
		}
		else{
			printf("%d HAVE ONE DIVESER %d",num,max_diviser);
		}
	}
}
