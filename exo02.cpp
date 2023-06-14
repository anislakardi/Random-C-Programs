#include<stdio.h>

int main(){
	
	int l,s,i,p,r,x,j,n;
	printf("enter X: ");
	scanf("%d",&x);
	printf("enter N: ");
	scanf("%d",&n);
    p=1;l=0;
	for(j=1;j<=n;j++){
		p=p*10;
	}
	n=n/2;
	for(i=0;i<n;i++){
		r=x%10;
		x=x/10;
		l=l+(r*p);
		printf("%d\n",p);
		p=p*10;
	}
	printf("%d    +   %d\n",l,x);
	s=l+x;
       printf("X= %d",s);
	return 0;
}
