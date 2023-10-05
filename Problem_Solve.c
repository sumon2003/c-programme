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
   int T,N,i,factorial=1,j;
   scanf("%d",&T);
   for(i=0; i<T; i++){
      scanf("%d",&N);
      for(j=1; j<=N; j++){
      factorial = factorial*j;
      }
      printf("%d\n",factorial);
      factorial = 1;
   }

 return 0;
}
