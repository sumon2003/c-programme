#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//#include<math.h>
//#include<stdlib.h>
int main(){
  int arr[10],i;
  for(i=0; i<10; i++){
    printf("Element - %d: ",i);
    scanf("%d",&arr[i]);
  }
  for(i=0; i<10; i++){
    printf("%d ",arr[i]);
  }

  
  return 0;
}