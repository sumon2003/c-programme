#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//#include<math.h>
//#include<stdlib.h>



void swp(int *a, int *b) {
  *a = *a + *b;
  *b = *a - *b;
  *a = *a - *b;

  printf("After Swaping: a = %d b = %d\n", *a, *b);
}

int main() {
  int a = 5, b = 10;
  printf("Before Swaping: a = %d, b = %d\n", a, b);

  swp(&a, &b);

  printf("After Swaping: a = %d b = %d\n", a, b);

  return 0;
}



