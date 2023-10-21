#include<stdio.h>
#include<string.h>

int main() {
   int t,i;
   char string[101];
   scanf("%d",&t);
   for(i=0; i<t; i++){
    scanf("%s",string);
   int len = strlen(string);
   if(len>10){
    printf("%c%d%c\n",string[0],len-2,string[len-1]);
   }
   else{
    printf("%s\n",string);
   }
}
  return 0;
}
