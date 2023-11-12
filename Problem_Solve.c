#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>


int main(){
  char s; // declare vul silo.
    printf("Enter a charecter: ");
    scanf("%c",&s);
    if(s=='A' || s=='E' || s=='I' || s=='O'||s=='U')
    printf("%c The charecter is vowel",s); //printf e &s lage na, s dite hoy.format specifier %c likhte hobe.
    else if(s=='a'|| s=='e'|| s=='i'|| s=='o' || s=='u')//else if er vitore condition dew nai.
    printf("%c The charecter is vowel",s);
    else{
      printf("SORRY!");
    }

  return 0;
}