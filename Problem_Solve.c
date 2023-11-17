#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
int main(){
  
  char a;
  printf("Enter a character: ");
  scanf("%c",&a);
  if(a >= '0' && a <= '9'){
    printf("This is a Digit.");
  }else{
    printf("This is not a Digit.");
  }
  

  
  return 0;
}