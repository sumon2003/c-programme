#include <stdio.h>

int main() {
    int arr[3][3];
    printf("Enter the value of the array:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The 2D array: \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
