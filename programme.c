#include<stdio.h>
#include<string.h>

int main() {
   int t,i,count=0;
   char bit[10];
   scanf("%d",&t);
   for(i=0; i<t; i++){
    scanf("%s",bit);
    if(bit[0]=='+' || bit[2]=='+'){
      count++;
    }
    else if(bit[0]=='-' || bit[2]=='-'){
        count--;
    }
   }
   printf("%d\n",count);
  return 0;
}
