#include<stdio.h>
#include<string.h>
#include<ctype.h>
//#include<math.h>
//#include<stdlib.h>
int main(){
 int n;
 scanf("%d",&n);
 int sum=0,digit;
 while(n!=1 && n!=4){
   sum=0;
   while(n>0){
      digit = n%10;
      sum += digit*digit;
      n/=10;
   }
   n=sum;
 }
 if(n==1){
   printf("Happy\n");
 }else{
   printf("Not Happy\n");
 }
  
  return 0;
}



