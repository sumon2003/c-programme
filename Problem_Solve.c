/// Sumon Khan ///
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<limits.h>
#include<stdbool.h>
int main()
{
  int arr[]={10,20,30,40,50,60},i,temp;
  printf("Original Array\n");
  for(i=0; i<6; i++){
    printf("%d ",arr[i]);
  }  
  printf("Original Array\n");
  temp = arr[0];
    arr[0] = arr[5];
    arr[5] = temp;
     temp = arr[1];
    arr[1] = arr[4];
    arr[4] = temp;
     temp = arr[2];
    arr[2] = arr[3];
    arr[3] = temp;
    for(i=0; i<6; i++){
      printf("%d ",arr[i]);
    }

  
 return 0;
}
