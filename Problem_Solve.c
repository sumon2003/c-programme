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
   int n,reverse = 0,last_digit;
   scanf("%d",&n);
   int Original = n;
   while(n != 0){
      last_digit = n % 10;
      reverse = (reverse * 10) + last_digit;
      n = n / 10;
   }
   printf("%d\n",reverse);
   if(Original == reverse){
      printf("YES\n");
   }
   else if(Original != reverse){
      printf("NO\n");
   }
   

 return 0;
}
