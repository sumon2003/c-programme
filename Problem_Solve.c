#include<stdio.h>
#include<stdlib.h>

int main()
{
  int n;
  scanf("%d",&n);
  int arr[n],i;
  for(i=0; i<n; i++){
    scanf("%d",&arr[i]);
    if(arr[i]>10){
      continue;
    }
    else if(arr[i]<=10){
      printf("A[%d] = %d\n",i,arr[i]);
    }
  }


 return 0;
}

