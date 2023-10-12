#include<stdio.h>
#include<stdbool.h>
int main()
{
  int t,n,i,count=0;
  scanf("%d",&t);
  for(i=0; i<t; i++){
    scanf("%d",&n);
    for(int j=1; j<=n; j++){
      if(n%j==0){
        count=count+j;
      }
    }
    bool isprime = true;
    if(count<=1){
      isprime = false;
    }else{
      for(int k=2; k*k<=count; k++){
        if(count%k==0){
          isprime = false;
          break;
        }
      }
    }
    if(isprime){
      printf("Yes\n");
    }
    else{
      printf("No\n");
    }
    count = 0;
    
  }

 return 0;
}
