#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main(){
long long int num;
scanf("%lld",&num);
char string[100];
sprintf(string, "%lld", num);//Using sprintf() to convert a number into a String.
int len_string = strlen(string);
int i,count=0;
for(i=0; i<len_string; i++){
  if(string[i]=='7' || string[i]=='4'){
    count++;
  }
}
if(count==7 || count==4){
  printf("YES");
}else{
  printf("NO");
}
  return 0;
}

 
