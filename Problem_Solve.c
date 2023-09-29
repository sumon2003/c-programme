#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main()
{
   int w;
   scanf("%d",&w);
   if(w%2==0 && w!=2){
    printf("YES\n");
   }
   else{
    printf("NO\n");
   }
    return 0;

}
