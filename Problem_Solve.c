#include <stdio.h>
int main() {
    int arr[]={12,14,17,11,18};
    int max=arr[0],i;
    int min=arr[0];
    for(i=0; i<5; i++){
        if(max<arr[i]){  
            max=arr[i];
        }  
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("%d\n",max);
    printf("%d\n",min);

    return 0;
}
