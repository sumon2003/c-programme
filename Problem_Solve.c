#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
/*
// Comparison function for ascending order
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
*/
int main()
{
 char string[101];
 scanf("%s",string);
 int len = strlen(string);
 for(int i=0; i<len; i++){
    if(string[i]=='H' || string[i]=='Q' || string[i]=='9'){
        printf("YES");
        return 0;
    }
 }
 printf("NO");

 return 0;
}

