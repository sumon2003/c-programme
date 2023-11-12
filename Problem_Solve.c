#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>


int main(){
  int num,i;
  scanf("%d",&num);
  char str[4];
  
  for(i=0; i<num; i++){
    scanf("%s",str);
    if(strcasecmp(str, "YES")==0){
      printf("YES\n");
    }else{
      printf("NO\n");
    }
  }

  return 0;
}