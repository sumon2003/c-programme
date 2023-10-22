#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
 
  char string1[101], string2[101];
  scanf("%s %s",string1,string2);
  int len = strlen(string1);
  int i;
  for(i=0; i<len; i++){
    string1[i] = tolower(string1[i]);
    string2[i] = tolower(string2[i]);
  }
  for(i=0; i<len; i++){  
    if(string1[i]>string2[i]){
      printf("1\n");
      return 0;
    }
    else if(string1[i]<string2[i]){
      printf("-1\n");
      return 0;
    } 
  }
  printf("0\n");
  return 0;
}
/* 
  */
 /*char string1[101], string2[101];
 scanf("%s %s",string1,string2);
 int result = strcasecmp(string1, string2);
 printf("%d",result);*/
