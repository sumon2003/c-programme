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
   int N,i;
   scanf("%d",&N);
   int arr[N];
   for(i=0; i<N; i++){
      scanf("%d",&arr[i]);
   }
   int max = arr[0];
   for(i=0; i<N; i++){
      if(max<arr[i]){
      max = arr[i];
      }
   }
   printf("%d\n",max);
 return 0;
}
