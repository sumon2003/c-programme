#include <stdio.h>
 
int main() {
 
  double R, pi, volume;
  pi = 3.14159;
  scanf("%lf",&R);
  volume = ((4.0/3) * pi * pow(R,3));
  printf("VOLUME = %.3lf\n", volume);
 
    return 0;
}