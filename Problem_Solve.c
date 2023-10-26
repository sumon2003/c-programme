#include<stdio.h>
#include<windows.h>
void clearScreen() {
    printf("\033[H\033[J"); // ANSI escape code to clear the screen
}
int main()
{
  int n;
  printf("Enter Your Number: ");
  scanf("%d",&n);
  clearScreen();
  for(int j=1; j<=n; j++){
    printf("%d--->\n",j);
     for(int i=1; i<=10; i++){
       printf("%d X %d = %d\n",j,i,j*i);
       Sleep(1500);
     }
  }
}

