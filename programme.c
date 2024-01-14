/*//  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ  //*/
/*//   Md Sumon Hossain Khan   //*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>

#define CYCLE 5
void clearScreen() {
    printf("\033[H\033[J"); // ANSI escape code to clear the screen
}
int main(){
    int hour, minute, second;
    printf("Enter Hour Minute Second:\n");
    scanf("%d%d%d",&hour, &minute, &second);

    int h=0, m=0, s=0;
    while(1)
    {
      clearScreen();
         printf("\n\n########      STOP WATCH     ########\n\n");
         printf("               %.2d:%.2d:%.2d\n\n",h,m,s);
         printf("#####################################\n");
         if(h==hour && m==minute && s==second){
          break;
         }
         s++;
         Sleep(1000);
         if(s == CYCLE){
          m++;
          s=0;
         }
         if(m == CYCLE){
          h++;
          m=0;
         }
    }

    
  return 0;
}
 
