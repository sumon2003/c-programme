#include<stdio.h>
#include<stdlib.h>

// Comparison function for ascending order
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main()
{
  int n;
  scanf("%d",&n);
  int arr[n],count;
  for(int i=0; i<n; i++){
    scanf("%d",&arr[i]);
  }
  qsort(arr, n, sizeof(int), compare);

  for(int i=0; i<n; i++){
    if(arr[0]==arr[i]){
      count++;
    }
  }
 // printf("%d",count); 
  if(count%2==0){
    printf("Unlucky\n");
  }else{
    printf("Lucky\n");
  }
  

 return 0;
}

