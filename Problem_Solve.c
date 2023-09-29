#include<stdio.h>
int main()
{
    int x = 5, y = 10;
    x += y++;
    ++x;
    printf("x = %d, y = %d\n", x, y);
    --y, x++;
    printf("x = %d, y = %d\n", x, y--);
    y %= x++ + 2;
    printf("x = %d, y = %d\n", x, y);
    return 0;

}
