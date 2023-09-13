#include <stdio.h>
int main() {
    int A,B,C;
    scanf("%d%d%d",&A,&B,&C);
    if(A>B && A>C)
    {
        printf("A is greater than B,C");
    }
    else if(B>A && B>C){
        printf("B is greater than A,C");
    }
    else if(C>A && C>B)
    {
        printf("C is greater than A,B");
    }

   
    return 0;
}
