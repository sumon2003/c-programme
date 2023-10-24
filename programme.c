#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main(){
int n,t;
scanf("%d %d",&n,&t);
char S[51],temp;
scanf("%s",S);
int i,j;
for(j=0; j<t; j++){
  for(i=0; i<n; i++){
    if(S[i]=='B' && S[i+1]=='G'){
      temp = S[i];
      S[i] = S[i+1];
      S[i+1] = temp;
      i++;
    }
  }
}
printf("%s",S);


  return 0;
}

 
