#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main(){
int n;
scanf("%d",&n);
int Pi, Qi, i, count=0;
for(i=0; i<n; i++){
  scanf("%d %d",&Pi,&Qi);
  if(Qi-Pi==1){
    continue;
  }
  else if(Pi<Qi){
    count++;
  }
}
printf("%d",count);
    
  return 0;
}
 