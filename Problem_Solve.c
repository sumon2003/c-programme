#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("%c is a vowel.\n",ch);
    }
    else if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){ //A ---- Z, input= B
        printf("%c is a Consonant\n",ch);
    }
    else{
        printf("%c is not a letter.",ch);
    }
    return 0;
}
