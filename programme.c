#include<stdio.h> 
int main() {
int number[100],i,n;
    printf("How many numbers: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &number[i]);
    }
   int min = number[0];
   for(i=1; i<n; i++)
   {
      if(min>number[i])
      min = number[i];
   }
   printf("Minimum = %d\n", min);

  return 0;
}
