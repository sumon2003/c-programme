#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
/*
// Comparison function for ascending order
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
*/
int main()
{
  long long int n;
  scanf("%lld",&n);
  //Foemula: f(n) = (-1)^n * (n // 2) + (-1)^n * (n % 2)
  if(n%2==0){
    printf("%lld",n/2);
  }else{
    printf("%lld",-((n/2)+1));
  }

 return 0;
}

