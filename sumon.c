#include<stdio.h> 
#include<math.h>
int main(){
	float x, y,hours;
	printf("Enter your value: ");
	scanf("%f %f",&x,&y);
	hours = abs(y-x);
	printf("The working hours of Chef is %.2f",hours); 

return 0;
}