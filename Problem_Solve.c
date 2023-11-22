#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//#include<math.h>
//#include<stdlib.h>

void transpose_array(int array[][3], int transposed_matrix[][3])
{
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      transposed_matrix[j][i] = array[i][j];
    }
  }
}
void print_matrix(int matrix[][3])
{
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      printf("%d ",matrix[i][j]);
    }
    printf("\n");
  }
}
int main(){
  int array[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int transposed_matrix[3][3];
  transpose_array(array, transposed_matrix);
  printf("Original Matrix:\n");
  print_matrix(array);
  printf("Transose Matrix:\n");
  print_matrix(transposed_matrix);
  


  return 0;
}
