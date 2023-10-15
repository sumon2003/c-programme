#include<stdio.h>
#include<string.h>
int main(){
char string[100];
gets(string);
printf("Hello, World!\n");
printf("%s\n",string);
return 0;
}