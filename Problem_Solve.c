#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        printf("%c is a vowel.\n",ch);
    }
    else{
        printf("%c is not a vowel.\n",ch);
    }
    return 0;
}
