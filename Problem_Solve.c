#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>


int main(){
  int a;
  printf("Enter a number: ");
  scanf("%d",&a);
  if(a%5==0 && a%11==0){
    printf("YES");
  }else{
    printf("NO");
  }
  return 0;
}