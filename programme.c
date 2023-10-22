#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
 char user_name[101];
 scanf("%s",user_name);
 int length = strlen(user_name);
 int i,j,n=length;
 for(i=0; i<n; i++){
  for(j=i+1; j<n; j++){
    if(user_name[i]==user_name[j]){
      length--;
      break;
    }  
  } 
 }
 if(length%2==0){
  printf("CHAT WITH HER!\n");
 }
 else{
  printf("IGNORE HIM!\n");
 }
  return 0;
}

 
