#include<stdio.h>
int main(){
int s,v1,v2,t1,t2,time1,time2;
scanf("%d%d%d%d%d",&s,&v1,&v2,&t1,&t2);
time1 = s * v1 + 2 * t1;
time2 = s * v2 + 2 * t2;
if(time1<time2){
    printf("First\n");
}
if(time1>time2){
    printf("Second\n");
}
if(time1==time2){
    printf("Friendship\n");
}
 return 0;
}