#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//#include<math.h>
//#include<stdlib.h>
int find_max(int arr[][3])
{
  int max_number = arr[0][0];
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      if(arr[i][j] > max_number){
        max_number = arr[i][j];
      }
    }
  }
  return max_number;
}
int main(){
  int array_2D[3][3];
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      scanf("%d",&array_2D[i][j]);
    }
  }
  int Max_value = find_max(array_2D);
  printf("Max value: %d",Max_value);

  return 0;
}
