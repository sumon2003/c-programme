#include<stdio.h>
int main(){
long long A,B;
while((scanf("%lld %lld",&A,&B))!=EOF){
    if(A>B){
        printf("%lld\n",(A-B));
    }
    else{
        printf("%lld\n",(B-A));
    }
}
return 0;
}