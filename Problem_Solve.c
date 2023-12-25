/*//  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ  //*/
/*//   Md Sumon Hossain Khan   //*/


#include <stdio.h>
#include <string.h>
int loop_sum(int n)
{
  if(n==0) return 0;
  else{
    return n + loop_sum(n-1);
  }
}
int main() {
    int n;
    scanf("%d",&n);
    int sum = loop_sum(n);
    printf("Sum of first %d natural numbers = %d",n,sum);
  return 0;
}

