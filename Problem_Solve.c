#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main()
{
    long long a,b,c,d;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    if(a+b-c==d){
        printf("YES\n");
    }
    else if(a-b+c==d){
        printf("YES\n");
    }
    else if(a+b*c==d){
        printf("YES\n");
    }
    else if(a*b+c==d){
        printf("YES\n");
    }
    else if(a*b-c==d){
        printf("YES\n");
    }
    else if(a-b*c==d){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;

}
