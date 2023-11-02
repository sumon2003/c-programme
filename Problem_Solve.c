#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
void Result(){
    int t,n,k,p,i,count=0;
   scanf("%d",&t);
   for(i=1; i<=t; i++){
    scanf("%d %d %d",&n,&k,&p);
    count = (k+p)%n;
    if(count==0){
      count = n;
    }
    
    printf("Case %d: %d\n",i,count);
   }  
   
}
int main(){
   Result();
    
  return 0;
}