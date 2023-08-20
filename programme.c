#include<stdio.h>
int main(){
int num, count=0, i;
printf("Enter a number: ");
scanf("%d",&num);
for(i=2; i<num; i++)
{
    if(num%i==0)
    {
        count++;
        break;
    }
}
if(count==0)
printf("This is a prime number.\n");
else
printf("This is not a prime number.");
    return 0;
}