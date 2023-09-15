#include<stdio.h>
int main()
{
    int arr[15], i;
    for(i = 0; i < 15; i++)
        scanf("%d", &arr[i]);

    int mx = arr[0];
    for(i = 0; i < 15; i++)
    {
        if(mx < arr[i])
        {
            mx = arr[i];
        }
    }
    printf("%d", mx);
    return 0;
}
