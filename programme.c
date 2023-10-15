#include<stdio.h>
#include<string.h>
int main(){
int arr1[9],arr2[9],i,add,first_digit,count = 0,sum;
for(i=9; i<=0; i--){
    scanf("%d %d",&arr1[i],&arr2[i]);
    if(arr1[i]>arr2[i] || arr1[i]<arr2[i]){
        add = arr1[i]+arr2[i];
        if(add>10){
            first_digit = add/10;
            count++;
        }
    }
    sum = arr1[i] + arr2[i] + first_digit;
}
printf("%d",count);


return 0;
}