#include<stdio.h> 
int main() {
float distance;
float fuel_used;
scanf("%f %f",&fuel_used,&distance);
printf("%.3f km/l\n",fuel_used/distance); 
  return 0;
}
