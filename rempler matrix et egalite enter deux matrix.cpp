#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int** remplire(int c,int l,int math[l][c]);
int identique(int c_1,int l_1,int math1[l_1][c_1],int c_2,int l_2,int math2[l_2][c_2]);
int main(){
int l1,c1,l2,c2;
printf("Enter number of lines in math_1: ");
scanf("%d",&l1);
printf("Enter number of colones in math_1: ");
scanf("%d",&c1);
printf("Enter number of lines in math_2: ");
scanf("%d",&l2);
printf("Enter number of colones in math_2: ");
scanf("%d",&c2);
int math_1[l1][c1],math_2[l2][c2];
math_1[l1][c1]=remplire(c1,l1,math_1);
printf("\n\n\n");
math_2[l2][c2]=remplire(c2,l2,math_2);
if(identique(c1,l1,math_1,c2,l2,math_2)==1){
	printf("\nsont egale...");
}
else{
	printf("\nn'est pas egale...");
}
	return 0;
}
int** remplire(int c,int l,int math[l][c]){
    srand(time(0));
	int i=0,j=0;
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			math[i][j]=rand()%10+1;
			printf("%d   ",math[i][j]);
		}
		printf("\n");
	}
	return math;
}
int identique(int c_1,int l_1,int math1[l_1][c_1],int c_2,int l_2,int math2[l_2][c_2]){
	int count=1,i=0,j=0;
	
	for(i=0;i<l_1;i++){
		for(j=0;j<c_1;j++){
            if(math1[i][j]==math2[i][j]){
                count++;
			}
		}
	}
		printf("\ncount=%d,lc=%d\n",count,l_1*c_1);
	if(count==l_1*c_1){
		return 1;
	}
	else{
	    return 0;
	}
}
