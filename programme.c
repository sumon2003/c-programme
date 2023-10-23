#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main(){
int n,i,j;
scanf("%d",&n);
int arr[3],count[3]={0};
for(i=0; i<n; i++){
  for(j=0; j<3; j++){
    scanf("%d",&arr[j]);
    count[j] += arr[j];
  }
}
if(count[0] == 0 && count[1] == 0 && count[2] == 0){
  printf("YES\n");
}
else{
  printf("NO\n");
}

  return 0;
}

 
