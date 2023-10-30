#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
 long long int t;
 scanf("%lld",&t);
 long long int a,b,i;
 for(i=0; i<t; i++){
    scanf("%lld %lld",&a,&b);
    long long int  count =(b - a % b) % b;

    printf("%lld\n",count); 
 }
 
 return 0;
}

