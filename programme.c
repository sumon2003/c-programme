#include<stdio.h>
#include<string.h>

int main() {
   int m,n,square,max_num_dominoes;
   scanf("%d %d",&m,&n);
   square = m * n;
   max_num_dominoes = square/2;
   printf("%d",max_num_dominoes);
   
  return 0;
}
