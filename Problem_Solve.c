#include<stdio.h>
int main(){
float n,q ,p;
scanf("%f",&n);
p = floor(n);
q = n-p;
if(n==p){
printf("int %.0f\n",p);
}
else if(n!=p){
printf("float %.0f %.3f\n",p,q);
}
return 0;
}