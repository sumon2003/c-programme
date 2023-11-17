#include<stdio.h>
#include<string.h>
#include<ctype.h>
 
int main() {
 char math[101];
 scanf("%s",math);
 int len = strlen(math);
 int i,swap,j;
 for(j=0; j<len; j+=2)
    {
        for(i=j+2; i<len; i+=2)
        {
            if(math[j]>math[i])
            {
                swap = math[j];
                math[j] = math[i];
                math[i] = swap;
            }
        }
    }
    printf("%s\n",math);
    
  return 0;
}