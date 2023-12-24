#include <stdio.h>
#include <string.h>
int main() {
   char str1[] = "kumon";
   char str2[] = "shan";
   int result = strcmp(str1, str2);
   printf("%d\n",result);
   if(result == 0){
    printf("The two string are equal.");
   }else if(result > 0){
    printf("str1 is lexicografically greater than str2.");
   }else{
    printf("str1 is lexicografically less than str2.");
   }

    return 0;
}
