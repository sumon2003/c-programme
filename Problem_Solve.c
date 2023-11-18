#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//#include<math.h>
//#include<stdlib.h>
int main(){
  int arr1[3], arr2[3];
  for(int i=0; i<3; i++){
    printf("element-%d:",i);
    scanf("%d",&arr1[i]);
  }
  printf("The elements stored in the first array are :\n");
  for(int i=0; i<3; i++){
    printf("%d ",arr1[i]);
  }
  for(int i=0; i<3; i++){
    arr2[i] = arr1[i]; //Copy arr1 to arr2
  }
  printf("\nThe elements copied into the second array are :\n");
  for(int i=0; i<3; i++){
    printf("%d ",arr2[i]);
  }


  
  return 0;
}