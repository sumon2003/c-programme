#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
  char string[101],out_string[101];
  scanf("%s",string);
  int length = strlen(string);
  int i,j=0;
  for(i=0; i<length; i++)
  {
   string[i] = tolower(string[i]);
   if(string[i] != 'a' && string[i] != 'e' && string[i] != 'i' && string[i] != 'o' && string[i] != 'u')
   {
     out_string[j] = string[i];
      j++;
   }
  }
  int len = strlen(out_string);
  for(int k=0; k<len; k++)
  {
   printf(".%c",out_string[k]);
  }

  return 0;
}

 
