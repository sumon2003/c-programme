#include<stdio.h> 
#include<math.h>
int main(){
	int x,y, Power;
	printf("Enter X = ");
	scanf("%d",&x);
	printf("Enter Y = ");
	scanf("%d",&y);
	Power = pow(x,y);
	printf("The power is = %d",Power);

return 0;
}