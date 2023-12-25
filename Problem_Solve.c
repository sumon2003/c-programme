/*//  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ  //*/
//*/   Md Sumon Hossain Khan   //*/
#include <stdio.h>
#include <string.h>
int main() {

   char str1[101] = "sumon";
   char str2[] = " khan";
   
   //concatenate str2 to end of str1
   strcat(str1, str2);
   
   printf("%s\n", str1);
   
    return 0;
}

