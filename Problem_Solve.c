#include<stdio.h>
int main(){
int ar[] = {1,2,4,6,8,10};
int i,count=0;
for(i=0; ar[i]!='\0'; i++){
    count++;
}    
    printf("The length of the array is %d\n",count);

return 0;
}