#include<stdio.h>
int main(){
int T,i,a,b,c,sum1,sum2,sum3;
scanf("%d",&T);
for(i=0; i<T; i++){
   scanf("%d%d%d",&a,&b,&c);
  sum1 = a+b;
  sum2 = b+c;
  sum3 = a+c;
  if(sum1%2!=0 || sum2%2!=0 || sum3%2!=0)
   printf("YES\n");
   else
   printf("NO\n");
}
 return 0;
}