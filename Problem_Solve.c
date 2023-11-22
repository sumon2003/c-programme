#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//#include<math.h>
//#include<stdlib.h>

void check_even_odd(int n)
{
  if(n % 2 == 0){
    printf("%d is EVEN.",n);
  }else{
    printf("%d is ODD.",n);
  }
}

int main(){
  int number;
  printf("Enter a number: ");
  scanf("%d",&number);
  check_even_odd(number);

  return 0;
}



