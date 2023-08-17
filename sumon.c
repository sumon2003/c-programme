#include<stdio.h> 
#include<math.h>
int main(){
	int A;
	printf("Enter a number to show these absolute value: ");
	scanf("%d",&A);
	A = abs(A);
	printf("The absolute value of A is = %d\n", A);
return 0;
}