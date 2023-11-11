#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>


int main(){
  int a;
  printf("Enter a year: ");
  scanf("%d",&a);
  if((a%4==0 && a%100 !=0) || a%400==0){
    printf("Leap Year");
  }else{
    printf("Sorry, I write the wrong year, exteremly sorry!!");
  } 
  return 0;
}