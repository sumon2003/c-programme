#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main(){
char S[1000001];
scanf("%s",S);
int len_S = strlen(S);
int i,count=0;
for(i=0; i<len_S; i++)
{
  count += S[i] - '0'; // replace string to ASCII to a string number 
}                      //Then Count++
printf("%d\n",count);

  return 0;
}

 
