#include<stdio.h>
int main(){
int t,i,a,b,total;
scanf("%d",&t);
for(i=0;i<t;i++){
   scanf("%d%d",&a,&b);
   total = a*b;
   if(total>9999 && total<100000 && total!=0)
   printf("YES\n");
   else
   printf("NO\n");
}
 return 0;
}