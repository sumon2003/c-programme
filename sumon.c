#include<stdio.h> //a = 36.25 b = 43.5 c = 25.5 
#include<math.h>
int main(){
	double a, b, c, s, area;
	printf("Enter 3 numbers: ");
	scanf("%lf%lf%lf",&a,&b,&c);
	s = (a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("The area of tringle is: %lf\n", area);
return 0;
}