#include<stdio.h> 
int main() {
int i, arr[100], n;
printf("Enter N = ");
scanf("%d", &n);
printf("Enter your numbers: ");
for(i=0; i<n; i++){
    scanf("%d", &arr[i]);
}
printf("The reverse number: ");
for(i=n-1; i>=0; i--){
    printf("%d ",arr[i]);
}

 return 0;
}
