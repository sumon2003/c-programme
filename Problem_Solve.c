#include<stdio.h>
#include<string.h>
#include<ctype.h>
//#include<math.h>
//#include<stdlib.h>
int main(){
  char str[101];
  scanf("%s",str);
  int len = strlen(str);
  for(int i=0; i<len; i++){
   str[i] = tolower(str[i]);
  }
  printf("%s",str);
  return 0;
}



