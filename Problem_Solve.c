#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//#include<math.h>
//#include<stdlib.h>
int main(){
  int arr[3],i;
  for(i=0; i<3; i++){
    printf("element-%d:",i);
    scanf("%d",&arr[i]);
  }
  printf("The values store into the array are :\n");
  for(i=0; i<3; i++){
    printf("%d ",arr[i]);
  }
  printf("\nThe values store into the array in reverse are :\n");
  for(i=2; i>=0; i--){
    printf("%d ",arr[i]);
  }


  
  return 0;
}