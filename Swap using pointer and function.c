/*//  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ  //*/
/*//   Md Sumon Hossain Khan   //*/


#include <stdio.h>
#include <string.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {

   int a, b;
   scanf("%d %d",&a, &b);
   printf("Before swap: a = %d, b = %d\n", a,b);
   swap(&a,&b);
   printf("After swap: a = %d, b = %d",a,b);
   
    return 0;
}

