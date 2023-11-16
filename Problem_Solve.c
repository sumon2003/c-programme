#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
int main(){
  int year;
  scanf("%d",&year);
  char Year[5];
  
  while(1){
    year++;
    sprintf(Year, "%d", year);
    int isDuplicate=0;
     for(int i=0; i<4; i++){
       for(int j=i+1; j<4; j++){
         if(Year[i]==Year[j]){
           isDuplicate=1;
           break;
         }
       }
       if(isDuplicate){
         break;
       }
     }
    if(!isDuplicate){
      printf("%d",year);
      break;
    }
  }


  return 0;
}