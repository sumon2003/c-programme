#include <stdio.h>
int main() {
   int arr[]={1,2,3,4,5},sum=0,i;
   for(i=0;i<5;i++){
    sum=sum + arr[i];//1+2=3+3=6+4=10+5=15
   }
   printf("%d",sum);
    return 0;
}
