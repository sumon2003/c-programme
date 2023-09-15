#include<stdio.h>
int main()
{
    int x = 5, y = 10;
    ++y;
    printf("x = %d, y = %d\n", x, y*2);
    --y, x++;
    printf("x = %d, y = %d\n", ++x, y);
    y %= 10 - ++x;
    printf("x = %d, y = %d\n", x, y);
    x %= ++y;
    printf("x = %d, y = %d\n", x, y--);
    return 0;
}
