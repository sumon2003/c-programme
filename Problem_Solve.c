#include<stdio.h>
#include<stdlib.h>

int main()
{
  long long int n;
  scanf("%lld",&n);
  long long int arr[n],i=0,sum=0;
  while(i<n){
    scanf("%lld",&arr[i]);
    sum+=arr[i];
    i++;
  }
  long long int summation = llabs(sum);
  printf("%lld",summation);

 return 0;
}

