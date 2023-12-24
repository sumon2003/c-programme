#include <stdio.h>

int main() {
   //User input using scanf() 
   char str1[100];
   scanf("%s",str1);
   printf("%s\n",str1);

   //User input using gets
   char str2[100];
   gets(str2);
   printf("%s\n",str2);

   //User input using fgets
   char str3[100];
   fgets(str3, sizeof(str3), stdin);
   printf("%s",str3);

//Don't run it combined all user input.
//Befor run it please comment any two user input.

    return 0;
}
