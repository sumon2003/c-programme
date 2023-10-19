#include<stdio.h>
int main(){
    int a,b,i=0;
    char* arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++){
         if(i>9 && i%2==0)
            {
             printf("even\n");
            }
         else if(i>9 && i%2)
       {
         printf("odd\n");
       }
         else
        {
         printf("%s\n",arr[i]);
        }

    }


return 0;
}