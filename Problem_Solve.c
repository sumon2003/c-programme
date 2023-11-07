#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>

void swap(int a, int b)
{
  
  int temp = a;
  a = b;
  b = temp;

  printf("%d %d",a,b);
}

int main(){
  int a,b;
  scanf("%d %d",&a,&b);

  swap(a,b);
   
  return 0;
}