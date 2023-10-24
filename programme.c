#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main(){
char s1[101],s2[101];
scanf("%s",s1);
scanf("%s",s2);
strrev(s1);
if(strcmp(s1, s2) == 0){
  printf("YES");
}else{
  printf("NO");
}
  return 0;
}

 
