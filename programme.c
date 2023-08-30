#include<stdio.h>
#include<stdlib.h> 
int main(){
int a,b,c, max, maximum;
printf("Enter your value: ");
scanf("%d%d%d",&a,&b,&c);
max = ((a+b)+abs(a-b))/2;
maximum = ((max+c)+abs(max-c))/2;
printf("%d eh o maior\n", maximum);

 return 0;
}
