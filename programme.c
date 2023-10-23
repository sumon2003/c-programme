#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main(){
int n,k,i;
scanf("%d %d",&n,&k);
for(i=0; i<k; i++){
  int last_digit=n%10;
  if(last_digit == 0){
    n/=10;
  }
  else if(last_digit != 0){
    n--;
  }
}
printf("%d\n",n);

  return 0;
}

 
