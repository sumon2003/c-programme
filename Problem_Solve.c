#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//#include<math.h>
//#include<stdlib.h>
int Factorial(int n)
{
  if(n==0 || n==1){
    return 1;
  }else{
    return n * Factorial(n-1);
  }
}

int main(){
  int number;
  scanf("%d",&number);
  int factorial_result = Factorial(number);
  printf("Factorial of %d! = %d",number,factorial_result);


  return 0;
}
