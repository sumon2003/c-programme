#include<stdio.h>
#include<string.h>
int main(){
int year;
int track = 0;
while(scanf("%d",&year)!=EOF){
    int leap_year = 0;
    int hulukulu = 0;
    int bulukulu = 0;

if((year%4==0 && year%100!=0)||year%400){
    printf("This is leap year\n");
    leap_year = 1;
}
 if(year%15==0){
    printf("This is huluculu festival year.\n");
    hulukulu = 1;
}
 if(year%55==0 && year%400==0){
    printf("This is bulukulu festival year.\n");
    bulukulu = 1;
}
if(!leap_year && !hulukulu && !bulukulu){
    printf("This is an ordinary year.\n");
}
track++;
if(track>1){
    printf("\n");
}

}
return 0;
}