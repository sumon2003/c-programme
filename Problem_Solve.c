/*//  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ  //*/
/*//   Md Sumon Hossain Khan   //*/

#include <stdio.h>
#include <string.h>
int main() {

   char str1[101] = "Md Sumon Hossain Khan";
   char str2[101];

   // Now we will copy str1 to str2;
   strcpy(str2, str1);
   
   printf("The original string: %s\n",str1);
   printf("The copy string: %s\n",str2);
    return 0;
}

