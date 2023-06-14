#include<stdio.h>
int is_amis(int n1,int n2);
int main(){
	int i=0,j=0,is;
	printf("les nombre amis enter 1 et 500 sont: ");
	for(i=1;i<=500;i++){
		j=i;
		for(j=i;j<=500;j++){
			is=is_amis(i,j);
			if(is==1){
				printf("(%d,%d)   ",i,j);
			}
		}
	}
	return 0;
}
int is_amis(int n1,int n2){
	int s1=0,s2=0,r,k=1,m=1;
	while(n1>=k){
		r=n1%k;
		if(r==0){
			s1=s1+k;
		}
		k++;
	}
	while(n2>=m){
		r=n2%m;
		if(r==0){
			s2=s2+m;
		}
		m++;
	}
	if(n1==s2&&n2==s1){
		return 1;
	}
	else{
		return 0;
	}
}
