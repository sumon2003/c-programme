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
   int N,i,multiplication;
   scanf("%d",&N);
   for(i=1; i<13; i++){
      multiplication = N * i;
      printf("%d * %d = %d\n",N,i,multiplication);
   }

 return 0;
}
