#include<stdio.h>
int main(){
   long long n,i;
   scanf("%lld",&n);
   long long num[n];
   for(i=0; i<n; i++){
    scanf("%lld",&num[i]);
   }
   for(i=0; i<n; i++){
     if(num[i]%2==0){
        printf("Even\n");
     }
     else if(num[i]%2 != 0){
        printf("Odd\n");
     }
   } 
return 0;
}