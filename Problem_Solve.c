#include<stdio.h>
int main(){
int A,B,C,D,sum1,sum2;
scanf("%d%d%d%d",&A,&B,&C,&D);
sum1=A+B;
sum2=C+D;
if(B>C && D>A && sum2>sum1 && C>0 && D>0 && A%2==0){
    printf("Valores aceitos\n");
}else{
    printf("Valores nao aceitos\n");
}
 return 0;
}