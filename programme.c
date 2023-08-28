#include<stdio.h> 
int main() {
double spent_time, avg_speed, fuel_spent;
scanf("%lf %lf", &spent_time, &avg_speed);
fuel_spent = (avg_speed*spent_time)/12.0;
printf("%.3lf\n", fuel_spent);

 return 0;
}
