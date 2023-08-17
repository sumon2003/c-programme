#include<stdio.h> 
#include<math.h>
int main(){
	double x, result;
	printf("Enter your number: ");
	scanf("%lf", &x);
	result = exp(x);
	printf("The result of ecplanation(e^x) = %lf", result);
	


return 0;
}