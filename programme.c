#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
     scanf("%d", &a[i]);
    }
     scanf("%d", &k);
    for(int i = 0; i < n; i++){
        int index = (i + k) % n; 
        printf("%d ", a[index]);
    }

    return 0;
}
