#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main(){
int n;
scanf("%d",&n);
int arr[n], i;
for(i=0; i<n; i++){
  scanf("%d",&arr[i]);
    if(arr[i]==1){
      printf("HARD");
      return 0;
    }
}
printf("EASY");
    
  return 0;
}
 