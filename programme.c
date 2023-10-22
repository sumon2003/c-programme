#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
  int a,b,count=0;
  scanf("%d %d",&a,&b);
  while(a<=b){
    a=a+a+a;
    b=b+b;
    count++;
  }
  printf("%d",count);

  return 0;
}

 
