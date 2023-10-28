#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
/*
// Comparison function for ascending order
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
*/
int main()
{
 int n,i;
 scanf("%d",&n);
 int arr[n];
 double sum=0.0;
 for(i=0; i<n; i++){
  scanf("%d",&arr[i]);
  sum += arr[i];
 }
 double result = sum/(n*100);
 printf("%.12lf",result*100); 
 return 0;
}

