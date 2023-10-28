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
 char str_i[101], str_j[101];
 scanf("%s",str_i);
 scanf("%s",str_j);
 int str_i_len = strlen(str_i);
 int i,j;
for(i=0,j=0; i<str_i_len,j<str_i_len; i++,j++){
    if(str_i[i]==str_j[i]){
        printf("0");
    }
    else if(str_i[i]!=str_j[i]){
        printf("1");
    }
}

 return 0;
}

