#include <stdio.h>
int main() {
    int A=5,B=7,C=6;
    if(A>B && A>C)
    {
        printf("A is greater than B,C");
    }
    else if(B>A && B>C){
        printf("B is greater than A,C");
    }
    else if(C>A && C>B)
    {
        printf("C is greater than B,C");
    }

   
    return 0;
}
