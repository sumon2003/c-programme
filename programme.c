#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main(){
char x[21],y[21];
scanf("%s",x);
scanf("%s",y);
int i;
for(i=0; i<20; i++){
  if(x[i]<y[i]){
    printf("%s",x);
    return 0;
  }
  else if(x[i]>y[i]){
    printf("%s",y);
    return 0;
  }
}
printf("%s\n",x); // If the loop completes, it means the strings are equal, so print any of them
  return 0;
}

 
