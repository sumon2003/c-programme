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
  int arr[n];
  for(int i=0; i<n; i++){
    scanf("%d",&arr[i]);
  }
  qsort(arr, n, sizeof(int), compare);

  for(int i=0; i<n; i++){
    printf("%d ",arr[i]);
  }

 return 0;
}

