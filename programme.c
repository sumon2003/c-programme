#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main(){
char S[100001];
int t,i,j;
int len_S,count=0;
scanf("%d",&t);
for(i=0; i<t; i++){
  scanf("%s",S);
  len_S = strlen(S);
  for(j=0; j<len_S-2; j++){
    if(S[j]==S[j+2] && S[j] != S[j+1]){
      count++;
    }
  }
if(count>0){
  printf("Good\n");
}
else{
  printf("Bad\n");
}
count=0;
}

  return 0;
}

 
