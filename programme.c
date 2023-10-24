#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main(){
char S[101];
scanf("%s",S);
int len_S = strlen(S);
int i,count=1; //count=1 for the first player.There's at least one player from each team present on the field.
for(i=0; i<len_S; i++){
  if(S[i]==S[i+1]){
    count++;
    if(count == 7){
      printf("YES");
      return 0;
    }
  }else{
    count = 1;
  }
}  
printf("NO");
  return 0;
}

 
