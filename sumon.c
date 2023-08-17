#include<stdio.h> 
#include<math.h>
int main(){
	int A = 50;
	int B = 100;
	int temp;
	temp = A;
	A = B;
	B = temp;
	printf("A and B value are: %d %d\n", A, B);
	
return 0;
}