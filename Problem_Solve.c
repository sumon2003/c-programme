#include<stdio.h>
#include<stdlib.h>

int main()
{
  int n;
  scanf("%d",&n);
  int arr[n],i;
  for(i=0; i<n; i++){
    scanf("%d",&arr[i]);
    if(arr[i]>0){
      printf("1 ");
    }
    else if(arr[i]==0){
      printf("0 ");
    }
    else if(arr[i]<0){
      printf("2 ");
    }
  }

 return 0;
}

