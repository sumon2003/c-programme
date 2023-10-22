#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
  int n,i,count=0;
  char colour[51];
  scanf("%d",&n);
  scanf("%s",colour);
  for(i=0; i<n; i++)
  {
    if(colour[i]==colour[i+1])
    {
      count++;
    }
  }
  printf("%d",count);

  return 0;
}

 
