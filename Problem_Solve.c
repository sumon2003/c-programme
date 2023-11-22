#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//#include<math.h>
//#include<stdlib.h>
int main(){
  int array_3D[3][3][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
  };

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      for(int k = 0; k < 3; k++){
        printf("%d", array_3D[i][j][k]);
      }
      printf("\n");
    }
    printf("\n");
  }

  return 0;
}
