#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
int main(){
  int x = 5;
  int *ptr;
  ptr = &x;
  printf("Value of x = %d\n",x);
  printf("Address of x = %p\n",&x);
  printf("Stored address to ptr of x = %p\n",ptr);
  printf("Address of ptr = %p\n",&ptr);
  printf("Value of ptr = %d\n",*ptr);
  return 0;
}