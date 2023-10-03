#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int arr[n],i;
for(i=0; i<n; i++){
    scanf("%d",&arr[i]);
}
int num,flag=0;
scanf("%d",&num);
for(i=0; i<n; i++){
    if(num==arr[i]){
        printf("Index is: %d\n",i);
        flag = 1;
        break;
    }    
}
if(!flag){
    printf("%d not found\n",num);
}
return 0;
}