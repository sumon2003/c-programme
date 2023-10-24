#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main(){
int n,i;
scanf("%d",&n);
char S[100001];
scanf("%s",S);
int count_A=0, count_D=0;
for(i=0; i<n; i++){
  if(S[i]=='A'){
    count_A++;
  }
  else if(S[i]=='D'){
    count_D++;
  }
}
if(count_A > count_D){
  printf("Anton");
}
else if(count_A < count_D){
  printf("Danik");
}
else if(count_A == count_D){
  printf("Friendship");
}

  return 0;
}

 
