#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
void check_word(){
    char S[101];
scanf("%s",S);
int len_S = strlen(S);
char word[] = "hello";
int j=0, count=0, i;
for(i=0; i<len_S; i++){
  if(S[i]==word[j]){
    j++;
    count++;
  }
}
if(count==5){
  printf("YES");
}
else{
  printf("NO");
}
}

int main(){

    check_word();
  return 0;
}