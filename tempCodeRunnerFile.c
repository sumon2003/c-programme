#include<stdio.h>

int sum(int p, int q){
   int sum = p + q;
   return sum;
}

int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  int result = sum(a,b);
  printf("%d", result);

    return 0;
}