#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>


int main(){
  int a;
  printf("Enter a number: ");
  scanf("%d",&a);
  if(a>0){
    printf("%d is positive.\n",a);
  }
  else if(a<0){
    printf("%d is negative.",a);
  }
  else if(a==0){
    printf("The number is 0.");
  }
  return 0;
}