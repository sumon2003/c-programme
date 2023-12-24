#include <stdio.h>

int main() {
    int arr1[3][3];
    printf("Enter the value of array 1:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    int arr2[3][3];
    printf("Enter the value of array 2:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    int result_arr[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            result_arr[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("The Sum of 2D array: \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ",result_arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
