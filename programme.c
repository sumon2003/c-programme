#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main(){
char string[101];
scanf("%s",string);
int len_string = strlen(string);
int i, count_upper = 0, count_lower = 0;
for(i=0; i<len_string; i++){
  if(string[i]>='A' && string[i]<='Z'){
    count_upper++;
  }
  else if(string[i]>='a' && string[i]<='z'){
    count_lower++;
  }
}
//printf("%d\n",count_upper);
//printf("%d\n",count_lower);
for(i=0; i<len_string; i++){
  if(count_upper>count_lower){
    printf("%c",toupper(string[i]));
  }
  else if(count_upper<=count_lower){
    printf("%c",tolower(string[i]));
  }
}

  return 0;
}

 
