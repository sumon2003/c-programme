#include<stdio.h>
#include<string.h>
int main(){
char string[10];
int count = 1;
while(1){
    scanf("%s",string);
    if(string[0]=='*'){
        break;
    }
    if(string[0]=='H'){
        printf("Case %d: Hajj-e-Akbar\n",count);
    }
    else if(string[0]=='U'){
        printf("Case %d: Hajj-e-Asghar\n",count);
    }
    count++;
}
return 0;
}