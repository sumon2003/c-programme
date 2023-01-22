#include<stdio.h>
#include<stdbool.h>
int main()
{
    //This is  a single comment.
    /*I'm new in C programming.
    So it could be wrong.
     printf("This is Md Sumon Hossain Khan.\\ I'm 18 years old.\n I'm learning C.\n\n");
     printf("This is my first programme.\n"); //This is a comment.
     printf("C programming is very easy.\tI love it to learn.\n");
     printf("They call him \"Sumon\"");
     int myNum = 1000;
     int myOtherNum;
     myOtherNum = myNum;

     printf("My favourite number is:%d\n", myOtherNum);

     int x, y, z;
     x = y = z = 50;
     
     printf("%d\n", x + y + z);

     float sumon = 19.99;
     double sumi = 15.55;

     printf("%f\n", sumon);
     printf("%lf\n", sumi);

     float myFloat = 5.5;

     printf("%f\n", myFloat);
     printf("%.1f\n", myFloat);
     printf("%.2f\n", myFloat);
     printf("%.4f\n", myFloat); 

     int x = 5;
     int y = 2;
     int sum = 5 / 2;

     printf("%d\n", sum);
    
    float sum = (float) 5 / 2;
    printf("%f\n", sum);

    int num1 = 5;
    int num2 = 3;
    float sum = (float) num1 / num2;

    printf("%.2f\n", sum);*/

    const int myNum = 15;
    const float my = 1.0;
    printf("%d\n", myNum);
    printf("%f\n", my);

    int sum = 100 * 50;
    printf("%d\n", sum);

    int num1 = 100 + 50;
    int num2 = num1 + 250;
    int num3 = num1 + num2;

    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3);

   /* int x = 55;
    printf("%d\n", --x);

    int y = 50;
    y -= 5;
    printf("%d\n", y); */

    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("%lu\n", sizeof(myInt));
    printf("%lu\n", sizeof(myFloat));
    printf("%lu\n", sizeof(myDouble));
    printf("%lu\n", sizeof(myChar));

    bool sumon = true;
    bool nomus = false;

    printf("%d\n", sumon);
    printf("%d\n", nomus);
    printf("%d\n", 10 > 9);
    printf("%d\n", 15 == 15);
    printf("%d\n", 15 == 55);
    printf("%d\n", 55 == 22);

    int x = 5;
    int y = 15;
    printf("%d\n", x > y);
    printf("%d\n", x < y);

    bool water = false;
    bool ice = false;
    printf("%d\n", water == ice);

    int myAge = 18;
    int votingage = 18;
    
    if(myAge >= votingage) {
      printf("Old enough to vote.\n");
    } else {
      printf("Not old enough to vote.\n");
    }
        
    if(29 > 18){
      printf("This is Sumon.\n");
    } else {
      printf("This is comuter.\n");
    }

    int p = 20;
    int q = 18;

    if(p > q){
      printf("20 is greater than q.\n");
    }

    int time = 20;
    if(time > 44){
      printf("Good Day.\n");
    } else if(time < 18){
      printf("Good Evening.\n");
    } else {
      printf("Good Night.\n");
    }

    int mynumber = 0;
    if(mynumber > 0){
      printf("This is a positive number.\n");
    } else if(mynumber < 0){
      printf("this is a neagative number.\n");
    } else {
      printf("This is 0.\n");
    }
    
    int day = 7;
    switch(day){
      case 1:
      printf("Friday\n");
      break;
      case 2:
      printf("Tuesday\n");
      break;
      case 3:
      printf("Saturday\n");
      break;
      case 4:
      printf("Monday\n");
      break;
      case 5:
      printf("Wednesday\n");
      break;
      case 6:
      printf("Sunday\n");
      break;
      default:
      printf("Looking forward to the weekend.\n");
    }

   /* int i = 0;
    while(i < 5){
      printf("%d\n", i);
      i++;*/

      int i = 20;
      do{
        printf("%d\n", i);
        i--;
      }
      while(i > 5);

      int s;
      for(s = 0; s < 5; s++ ){
        printf("%d\n", s);
      }

      int a;
      for(a = 0; a <= 10; a = a + 2){
        printf("%d\n", a);
      }

      //Nested Loop

      int b, c;
      //Outer Loop
      for(b = 1; b <= 5; ++b){
        printf("Outer:%d\n", b);
      //Inner Loop
      for(c = 1; c <= 3; ++c){
        printf(" Inner:%d\n", c);
      }  
      }

    
     return 0;
}