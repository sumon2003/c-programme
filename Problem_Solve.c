#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main(){
   int a,b,c;
 scanf("%d",&a);
 scanf("%d",&b);
 scanf("%d",&c);
 int count1,count2,count3,count4,count5;
 count1 = a+b*c;
 count2 = a*(b+c);
 count3 = a*b*c;
 count4 = (a+b)*c;
 count5 = a+b+c;
if(count1>=count2 && count1>=count3 && count1>=count4 && count1>=count5){
    printf("%d",count1);
}
else if(count2>=count1 && count2>=count3 && count2>=count4 && count2>=count5){
    printf("%d",count2);
}
else if(count3>=count1 && count3>=count2 && count3>=count4 && count3>=count5){
    printf("%d",count3);
}
else if(count4>=count1 && count4>=count2 && count4>=count3 && count4>=count5){
    printf("%d",count4);
}
else if(count5>=count1 && count5>=count2 && count5>=count3 && count5>=count4){
    printf("%d",count5);
} 

    
  return 0;
}