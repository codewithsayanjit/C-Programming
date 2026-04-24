/* WAP to develop calculator using switch case where following operation will be performed.
1) Addition
2) Subtraction
3) Multiplication
4) Division
*/
// simple calculator
#include<stdio.h>
int main(){
	int i;
	float num1,num2;	
	printf(" \n 1 for Addition \n 2 for Substraction \n 3 for Multiplication \n 4 for Division \n");
	printf("Enter first number: ");
	scanf("%f",&num1);
	printf("Enter Second number: ");
	scanf("%f",&num2);
	printf("Enter Choice :");
	scanf("%d",&i);
	switch(i){
		case 1:printf("Result= %.f",num1+num2);
		    break;
		case 2:printf("Result= %.f",num1-num2);
		    break;
		case 3:printf("Result= %.f",num1*num2);
	        break;   
		case 4:printf("Result= %.f",num1/num2);
		    break;
		default:printf("Wrong Choice");
	}
	return 0;
}