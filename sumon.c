#include<stdio.h> 
#include<math.h>
int main(){
	double x, result;
	printf("Enter your number: ");
	scanf("%lf", &x);
	result = log(x);
	printf("The result of log = %lf", result);
	


return 0;
}