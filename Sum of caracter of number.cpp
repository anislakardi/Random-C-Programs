#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
float a,c,sum,x,y,f;
printf("enter number (8 caracter ): ");
scanf("%f",&a);
x=a;
sum=0;
c=0;
f=a;
while (c<7){
x=f/10;
f=floor(x);
y=x-f;
y=y*10;
sum=sum+y;
c=c+1;
}
sum=round(sum);
printf("the sum of the number is: %2.f",sum);
return 0;
}
