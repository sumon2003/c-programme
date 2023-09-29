#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main()
{
    char C;
    scanf("%c",&C);
    if(C>='a' && C<'z'){
        printf("%c\n",C+1);
    }
    else if(C>='a' && C<='z'){
        printf("%c\n",C-25);
    }

    return 0;

}
