/*//  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ  //*/
/*//   Md Sumon Hossain Khan   //*/


#include <stdio.h>
#include <string.h>

int main() {

   int arr[101];
   int sum=0;
   for(int i=0; i<10; i++){
    scanf("%d",&arr[i]);
   }
   for(int i=0; i<10; i++){
    if(arr[i]%2 != 0){
      sum = sum + arr[i];
    }
   }
   printf("%d",sum);
    return 0;
}

