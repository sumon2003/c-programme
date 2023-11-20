#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//#include<math.h>
//#include<stdlib.h>
int main(){
  int n;
  scanf("%d",&n);
  int groups = 0;
  int previous, current;
  for(int i=0; i<n; i++){
    scanf(" %d",&current);
    if(i==0 || previous != current){
      groups++;
    }
    previous = current;
  }
  printf("%d",groups);

  return 0;
}