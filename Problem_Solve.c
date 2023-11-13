//Check a number is EVEN or ODD 
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
int main(){
  int num;
  printf("Enter a number: ");
  scanf("%d",&num); //for example: 2, 5
  if(num % 2 == 0)
  {
    printf("EVEN");
  }else{
    printf("ODD");
  }
  
  return 0;
}