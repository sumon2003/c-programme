#include<stdio.h> 
#include<math.h>
int main(){
	double x, result;
	printf("Enter your number: ");
	scanf("%lf", &x);
	result = round(x);
	printf("The result of round = %lf", result);
	


return 0;
}