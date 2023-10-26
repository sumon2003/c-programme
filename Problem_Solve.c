#include<stdio.h>
#include<stdlib.h>

int main()
{
  long long int n;
  scanf("%lld",&n);
  long long int arr[n],i;
  for(i=0; i<n; i++){
    scanf("%lld",&arr[i]);
  }
  long long int num;
  scanf("%lld",&num);
  for(i=0; i<n; i++){
    if(num == arr[i]){
      printf("%lld",i);
      return 0;
    }
  }
  printf("-1");
 return 0;
}

