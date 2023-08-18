#include<stdio.h> 
#include<math.h>
int main(){
	char ch;
	printf("Enter a character: ");
	scanf("%c",&ch);
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	     printf("Vowel");
	else
	     printf("Consonant");	 

return 0;
}