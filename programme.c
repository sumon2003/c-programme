#include<stdio.h>
#include<stdlib.h> 
int main(){
int a,b, max;
printf("Enter your value: ");
scanf("%d%d",&a,&b);
max = ((a+b)+abs(a-b))/2;
printf("%d\n", max);

 return 0;
}
