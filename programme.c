#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main(){
 char s[1000001];
 fgets(s, sizeof(s), stdin);
 int len = strlen(s);
 char c;
 int i;
 for(i=0; i<len; i++)
 {
  c = s[i];
  if(c == '\\')
  {
    break;
  }
  printf("%c",c);
 }
 printf("\n");

  return 0;
}

 
