#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main(){
char S[1001];
scanf("%s",S);
char original_S[1001];
strcpy(original_S, S);

strrev(S);

if(strcmp(S, original_S) == 0){
  printf("YES\n");
}else{
  printf("NO\n");
}

  return 0;
}

 
