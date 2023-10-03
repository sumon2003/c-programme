#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<limits.h>
#include<stdbool.h>
int main()
{
 int arr[]={5,9,10,16,20,21,23,28,30};
 int n=9, r=n-1, data, mid,l;
 scanf("%d",&data);
for(l=0; l<=r; l++){
    mid = (l+r)/2;
    if(data == arr[mid]){
        printf("%d\n",mid);
        break;
    }
    else if(data>arr[mid]){
        l=mid+1;
    }
    else if(data<arr[mid]){
        r=mid-1;
    }
}
printf("%d",l);



}
