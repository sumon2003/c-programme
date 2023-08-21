#include<stdio.h> 
int main() {
 double A, B, C, a_rec_tri, rad_cir, trapezium, a_square, a_rec;
 scanf("%lf%lf%lf", &A,&B,&C);
a_rec_tri = 1.0/2*(A*C);
rad_cir = 3.14159*C*C;
trapezium = (((A+B)/2)*C);
a_square = B*B;
a_rec = A*B;
printf("TRIANGULO: %.3lf\n",a_rec_tri);
printf("CIRCULO: %.3lf\n",rad_cir);
printf("TRAPEZIO: %.3lf\n",trapezium);
printf("QUADRADO: %.3lf\n",a_square);
printf("RETANGULO: %.3lf\n",a_rec);
    return 0;
}