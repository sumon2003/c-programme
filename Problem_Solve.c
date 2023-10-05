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
   int x,i,count = 0;
   scanf("%d",&x);
   for(i=0; i<x; i++){
      if(x%(x-i)==0){
         count++;
      }
   }
   if(count==2){
      printf("YES\n");
   }
   else if(count!=2){
      printf("NO\n");
   }

 return 0;
}
