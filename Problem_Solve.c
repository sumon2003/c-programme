#include <stdio.h>
int main() {
    int n,i,value;
    scanf("%d",&n);
    for(i=0; i<n; i++) 
    {
        scanf("%d",&value);
        if(value%2==0)
        {
            printf("Even\n");
        }
        else{
            printf("ODD\n");
        }

    }
   
   
    return 0;
}
