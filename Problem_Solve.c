#include<stdio.h>
#include<string.h>
#include<ctype.h>
//#include<math.h>
//#include<stdlib.h>
void pythagorean(int a, int b, int c)
{
   int value1 = (a*a) + (b*b);
   int value2 = (c*c);
   if(value1 == value2){
      printf("Yes\n");
   }else{
      printf("No\n");
   }
}
int main(){
 int a,b,c;
 scanf("%d %d %d",&a,&b,&c);
 pythagorean(a,b,c);
  
  return 0;
}



