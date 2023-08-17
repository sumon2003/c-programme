#include<stdio.h> 
#include<math.h>
int main(){
	double x, result;
	printf("Enter your number: ");
	scanf("%lf", &x);
	result = sin(x);
	printf("The result of sine = %lf", result);
	


return 0;
}