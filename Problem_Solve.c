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
  for(i=n-1; i>=0; i--){
    printf("%lld ",arr[i]);
  }


 return 0;
}

