#include<stdio.h> 
main(){
	int a ;
	printf("enter your mark : ");
	scanf("%d", &a);
if(a>=0 && a<=100){
			if(a>90){
	printf("Grade : A");
	}
	else if(a>80 && a<=90){
		printf("Grade : B+");}
		else if(a>70 && a<=80){
		printf("Grade : B");}
		else if(a>60 && a<=70){
		printf("Grade : C+");}
		else if(a>50 && a<=60){
		printf("Grade : C");}
        else if(a>40 && a<=50){
		printf("Grade : D+");}
		else if(a>30 && a<=40){
		printf("Grade : D");}
}
else{
	printf("invalid");
}
}
	

