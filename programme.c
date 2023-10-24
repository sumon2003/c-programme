#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main(){
int n,h;
scanf("%d %d",&n,&h);
int arr[n],i,count=0;
for(i=0; i<n; i++){
  scanf("%d",&arr[i]);
}
for(i=0; i<n; i++){
  if(arr[i]<=h){
    count++;
  }
  if(arr[i]>h){
    count+=2;
  }
}
printf("%d",count);


  return 0;
}

 
