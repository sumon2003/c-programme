#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//#include<math.h>
//#include<stdlib.h>
int main(){
 char *arr_str[] = {"Apple", "Jackfruit", "Orange", "Mango"};
 char **ptr = arr_str;
 int size = sizeof(arr_str) / sizeof(arr_str[0]);

 for (int i = 0; i < size; i++)
  {
    printf("%s ",*(ptr + i));
  }

  return 0;
}



