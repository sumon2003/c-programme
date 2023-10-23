#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main(){
char S[100001];
fgets(S, sizeof(S), stdin);
int len_S = strlen(S);
int i;
for(i=0; i<len_S; i++){
  S[i] = islower(S[i]) ? toupper(S[i]) : tolower(S[i]);//islower() is a library function of #include<ctype.h>
}
for(i=0; i<len_S; i++){
  if(S[i] == ','){
    printf(" ");
    continue;
  }  
  printf("%c",S[i]);
}

  return 0;
}

 
