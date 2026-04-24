// Check whether a number is prime or not.
 
#include<stdio.h>
int main(){
  int num , i;
  printf("Enter a number: ");
  scanf("%d" ,&num);
  for(i=2;i<num;i++){
    if(num%i==0){
      printf("The number is not prime");
      break;
    }
  }
  if(i==num){
      printf("The number is prime");
    }
  return 0;
}
