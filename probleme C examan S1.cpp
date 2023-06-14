#include<stdio.h>
int ispowerof2(int);
int sum(int*,int,int);

int main(){
	
int Nplay,i=0,n0=0,nf,sum1,sum2;

do{
	printf("Enter Number Of Players: ");
	scanf("%d",&Nplay);
} while(ispowerof2(Nplay)==0);

int teams[Nplay];
for(i=0;i<Nplay;i++){
	printf("\nEnter N%d:  ",i+1);
	scanf("%d",&teams[i]);
}
nf=Nplay-1;
while(nf!=n0+1){
	sum1=sum(teams,n0,((nf+1+n0)/2)-1);
	sum2=sum(teams,(nf+1+n0)/2,nf);
	if(sum1>sum2){
		nf=(nf+1+n0)/2-1;
	}
	else{
		n0=(nf+1+n0)/2;
	}
	
}
printf("The Absolute Winner Is: %d",teams[n0]);
	return 0;
}

int ispowerof2(int number){
	int powe=1,n=0;
	while(powe!=number&&powe<=1024){
		if(powe==number){
			return 1;
		}
		powe=powe*2;
	}
if(powe!=number){
			return 0;
		}
}
int sum(int* teams1,int n00,int nff){
	int sum=0,j=n00;
	for(j=n00;j<=nff;j++){
		sum=sum+teams1[j];
	}
	return sum;
}
