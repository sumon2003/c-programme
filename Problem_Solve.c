#include<stdio.h>
int main(){
int n,m,a,result1, result2,flagstone;
float length_side,width_side;
scanf("%d%d%d",&n,&m,&a);
length_side =(float)n/a;
width_side = (float)m/a;
result1 = ceil(length_side);
result2 = ceil(width_side);
flagstone = result1+result2;
printf("%d\n",result1);
printf("%d\n",result2);
printf("%d",flagstone);



 return 0;
}