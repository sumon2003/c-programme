/// Sumon Khan ///
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<limits.h>
#include<stdbool.h>
int main()
{
    int N,first_digit,last_digit;
    scanf("%d",&N);
    first_digit = N / 10;
    last_digit = N % 10;
    if(N%10==0 && last_digit%first_digit==0){
      printf("YES\n");
    }
    else if(first_digit%last_digit==0 || last_digit%first_digit==0){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
 
 return 0;
}
