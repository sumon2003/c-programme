#include<stdio.h>
int main(){
double a,b,c,root,X1,X2;
scanf("%lf%lf%lf",&a,&b,&c);
root=sqrt((b*b)-(4*a*c));
X1=((-b+root)/2*a);
X2=((-b-root)/2*a);
if(a==0 || root<=0){
    printf("Impossivel calcular");
}else{
    printf("R1 = %.5lf\n",X1);
    printf("R2 = %.5lf\n",X2);
}

 return 0;
}