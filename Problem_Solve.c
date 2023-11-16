#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
int main(){
  char str[1001],str2[1001]={0};
  gets(str);
  int len = strlen(str);
  int count=0;
  for(int i=0; i<len; i++){
    if(str[i]>='a' && str[i]<='z'){
      str2[count] = str[i];
      count++;
    }
  }
  int cnt=0;
  for(int i=0; i<count; i++){
    int isDuplicate=0;
    for(int j=i+1; j<count; j++){
      if(str2[i]==str2[j]){
        isDuplicate=1;
        break;
      }
    }
    if(!isDuplicate){
      cnt++;
    }
  }
 
  printf("%d",cnt);

  return 0;
}