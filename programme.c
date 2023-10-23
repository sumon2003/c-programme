#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
 char S[1001],T[1001];
 scanf("%s",S);
 scanf("%s",T);
 int len_S = strlen(S);
 int len_T = strlen(T);
 printf("%d %d\n",len_S,len_T);
 printf("%s %s",S,T);

  return 0;
}

 
