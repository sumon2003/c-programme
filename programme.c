#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
 int k,n,w;
 scanf("%d %d %d",&k,&n,&w);
 int i,total_cost=0,borrowed_Money;
 for(i=1; i<=w; i++)
 {
  total_cost += k*i;
 }
 if(total_cost<=n)
 {
  printf("0\n");
 }
 else if(total_cost>n)
 {
  borrowed_Money = total_cost - n;
  printf("%d",borrowed_Money);
 }

  return 0;
}

 
