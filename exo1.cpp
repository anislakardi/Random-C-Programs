#include<stdio.h>
int isprime(int i);

int main(void){
	
int n,all_primes_smalers,i;
printf("enter number: ");
scanf("%d",&n);
printf("all smaller prime number than %d is: ",n);
for(i=2;i<=n;i++){
	
	all_primes_smalers=isprime(i);
	
	if(all_primes_smalers==1){
		printf("%d  ",i);
	}

}
	return 0;
}
int isprime(int j){
	int s,r,k;
	k=2;
	s=0;
	for(k=2;k<j;k++){
		r=j%k;
		/*Here, the group of denominators was made from 2 up to the number n
		 If the number accepts division by one of the denominators, then r==0*/
		if(r==0){
			s=1;
			/*If the condition is met, it is not prime, so I put a variable s with an initial value of 0, 
			If a change reveals to us that I am a non-prime number*/
		}
	}
	if(s==0){
		return 1;
	}
}
