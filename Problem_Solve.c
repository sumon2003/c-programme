#include<stdio.h>
int main(){
int t,n,i,computer1,computer2;
scanf("%d",&t);
for(i=0;i<t;i++){
    scanf("%d",&n);
    computer1 = n-10;
    computer2 = n-(n-10);
    if(n>10)
    printf("%d %d\n",computer1, computer2);
    else
    printf("0 %d\n",n);
}

 return 0;
}