#include <stdio.h>

int main() {
  int t, n;
  scanf("%d", &t);

  for (int i = 0; i < t; i++) {

    scanf("%d", &n);

    int arr[n];
    for (int j = 0; j < n; j++) {
      scanf("%d", &arr[j]);
    }
    int sorting_possible = 1;
    for (int j = 2; j < n-2; j++) {
      if (arr[j - 1] < arr[j] && arr[j] > arr[j + 1]) {
        sorting_possible = 0;
        break; 
      }
    }

    if (sorting_possible) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }

  return 0;
}
