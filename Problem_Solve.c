#include<stdio.h>
int main(){
int n,i,p,count_even=0,count_odd=0,count_positive=0,count_negative=0;
scanf("%d",&n);
for(i=0; i<n; i++){
    scanf("%d",&p);
    if(p%2==0){
        count_even++;
    }
    if(p%2!=0){
        count_odd++;
    }
    if(p>0){
        count_positive++;
    }
    if(p<0){
        count_negative++;
    }
    
}
printf("Even: %d\n",count_even);
printf("Odd: %d\n",count_odd);
printf("Positive: %d\n",count_positive);
printf("Negative: %d\n",count_negative);
return 0;
}