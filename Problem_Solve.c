#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
int main(){
  char str[201];
  scanf("%s",str);
  int len = strlen(str);
  for(int i=0; i<len; i++){
  if(strncmp(str+i, "WUB", 3) == 0){
    i+=2;
    if(i>2){
      printf(" ");
    }
    continue;
  }
  printf("%c",str[i]);
  }
  
  return 0;
}