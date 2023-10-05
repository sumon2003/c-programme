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
    int l1, r1, l2, r2;
    scanf("%d %d %d %d", &l1, &r1, &l2, &r2);

    // Calculate the boundaries of the intersection
    int left_boundary = (l1 > l2) ? l1 : l2;
    int right_boundary = (r1 < r2) ? r1 : r2;

    // Check if there is a valid intersection
    if (left_boundary <= right_boundary) {
        printf("%d %d\n", left_boundary, right_boundary);
    } else {
        printf("-1\n");
    }

 
 return 0;
}
