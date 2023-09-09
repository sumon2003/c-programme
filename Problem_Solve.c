#include<stdio.h>
int main(){
int num,i,divission;
scanf("%d",&num);
for(i=0; i<4; i++){
    divission = num/10;
}
 if(divission%2!=0 && divission<10){
    printf("ODD");
}
else if(divission%2==0 && divission>10){
     printf("EVEN");
}

   
return 0;
}