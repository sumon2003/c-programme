#include<stdio.h>
#include<math.h>
int main(){
double num1, num2;
char operator;

printf("Enter an operator(+,-,*,/): ");
scanf("%c", &operator);

switch(operator)
{
	case '+':
	    printf("Enter two number: ");
        scanf("%lf %lf", &num1,&num2);
	    printf("%lf + %lf = %lf",num1,num2,num1+num2);
		break;
	case '-':
	    printf("Enter two number: ");
        scanf("%lf %lf",&num1,&num2);
	    printf("%lf - %lf = %lf",num1,num2,num1-num2);
		break;
	case '*':
	    printf("Enter two number: ");
        scanf("%lf %lf",&num1,&num2);
	    printf("%lf * %lf = %lf",num1,num2,num1*num2);
		break;
	case '/':
	    printf("Enter two number: ");
        scanf("%lf %lf",&num1,&num2);
	    printf("%lf / %lf = %lf",num1,num2,num1/num2);	
		break;		
}
	return 0;
}
