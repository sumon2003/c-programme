#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//#include<math.h>
//#include<stdlib.h>

void check_Palindrome(int n)
{
  int original_number = n;
  printf("Original number: %d\n",original_number);

  int remainder, reversed_number = 0;

  while(n != 0){
    remainder = n % 10;
    n /= 10; 
    reversed_number = reversed_number * 10 + remainder; 
  }

  printf("Reversed Number: %d\n",reversed_number);

  if(reversed_number == original_number){
    printf("%d is palindrome.\n",original_number);
  }else{
    printf("%d is not palindrome.\n",original_number);
  }

}

int main(){
  int number;
  printf("Enter a number: ");
  scanf("%d",&number);
  check_Palindrome(number);


  return 0;
}



