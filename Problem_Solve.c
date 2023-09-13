#include <stdio.h>
int main() {
    int arr[]={12,14,17,11,18};
    int max=arr[0],i;
    for(i=0; i<5; i++){
        if(max<arr[i]){  
            max=arr[i];
        }
       
    }
    printf("%d",max);

    return 0;
}
