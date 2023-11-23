#include<stdio.h>
#include<string.h>
#include<ctype.h>
//#include<math.h>
//#include<stdlib.h>
int fibonacci(int n)
{
  if(n==0){
   return 0;
  }else if(n==1){
   return 1;
  }else{
   return fibonacci(n-1) + fibonacci(n-2);
  }
}
int main(){
  int n;
  scanf("%d",&n);
  int fibonacci_number = fibonacci(n);
  printf("%d",fibonacci_number);
  
  return 0;
}



