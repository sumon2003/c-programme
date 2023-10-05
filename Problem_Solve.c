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
   long long n,k,a;
   double result;
   scanf("%lld %lld %lld",&n,&k,&a);
   result = (double)(n*k)/a;
   if((n*k)%a != 0.0){
      printf("double\n");
   }
   else if((long long)result>=1 && (long long)result<=2147483647){
      printf("int\n");
   }
   else{
      printf("long long\n");
   }
 
 return 0;
}
