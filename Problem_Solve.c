#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>


int main(){
  //@#$%abc
  char a;
  printf("Enter a character: ");
  scanf("%c",&a);
  if(a>='A' &&  a<='Z'){
    printf("%c is alphabet.",a);
  }
  else if(a>='a' && a<='z'){
    printf("%c is alphabet.",a);
  }else{
    printf("%c is not an alphabet.",a);
  }
  return 0;
}