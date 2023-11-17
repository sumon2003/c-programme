#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
int main(){
  int arr[100];
  int i,sum=0;
  for(i=0; i<5; i++){
    scanf("%d",&arr[i]);
    sum = sum+arr[i];
  }
  printf("%d",sum);

 

  return 0;
}