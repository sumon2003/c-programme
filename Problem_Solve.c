#include<stdio.h>
#include<string.h>
#include<ctype.h>
//#include<math.h>
//#include<stdlib.h>
int main(){
 char str[101]; 
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
    printf("%s\n", str);


  
  return 0;
}



