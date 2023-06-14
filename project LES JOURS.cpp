#include<stdio.h>
int main(){

int a;
printf("entrer un nombre de (1 a 7) pour a voir le jour:");
scanf("%d",&a);
switch(a){
	
case 1 :printf("dimanche");break;
case 2 :printf("lundi");break;
case 3 :printf("mardi");break;
case 4 :printf("mercredi");break;
case 5 :printf("jeudi");break;
case 6 :printf("vendredi");break;
case 7 :printf("samdi");break;
default :printf("le numero est INCORRECT ! essaie encore une fois") ;

}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
