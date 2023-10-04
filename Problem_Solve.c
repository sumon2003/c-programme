/// Sumon Khan ///
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<limits.h>
#include<stdbool.h>
int main()
{
 int n,k,i,count=0;
 scanf("%d %d",&n,&k);
 int arr[n];
 for(i=0; i<n; i++){
  scanf("%d",&arr[i]);
 }
 for(i=0; i<n; i++){
  if(arr[i]>=arr[k-1] && arr[i]!=0){
    count++;
  }
  
 }
 printf("%d",count);


}
