#include<stdio.h> 
int main() {
int distance;
float fuel_used, avg_consumption;
scanf("%f %d",&fuel_used,&distance);
avg_consumption = (fuel_used/distance)*100;
printf("%.3f km/l\n", avg_consumption); 

  return 0;
}
