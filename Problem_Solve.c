#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//#include<math.h>
//#include<stdlib.h>
void print_matrix(int matrix[][3])
{
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}
void multiply_arrays(int array1[][3], int array2[][3], int product_matrix[][3])
{
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            int product = 0;
            for(int k=0; k<3; k++){
                product += array1[i][k] * array2[k][j];
            }
            product_matrix[i][j] = product;
        }
    }
}

int main(){
  int array1[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int array2[][3] = {{1, 4, 7}, {2, 5, 8}, {3, 6, 9}};
  int product_matrix[3][3];
  multiply_arrays(array1,array2,product_matrix);
  printf("Matrix 1:\n");
  print_matrix(array1);
  printf("Matrix 2:\n");
  print_matrix(array2);
  printf("Product Matrix:\n");
  print_matrix(product_matrix);



  return 0;
}
