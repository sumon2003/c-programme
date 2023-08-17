#include<stdio.h> 
#include<math.h>
int main(){
	double X;
	printf("Enter your number: ");
	scanf("%lf", &X);
	X = sqrt(X);
	printf("The square root value of X is = %.2lf\n", X);
return 0;
}