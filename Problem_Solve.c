#include<stdio.h>
int main(){
int T,a,b,i;
scanf("%d",&T);
for(i=0;i<T;i++){ 
    scanf("%d%d",&a,&b);
    if(a<10 && b<10)
    printf("case %d: %d\n",i+1,a+b);   
}
 return 0;
}