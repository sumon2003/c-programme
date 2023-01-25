#include<stdio.h>
#include<stdbool.h>
#include<string.h>
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

      int d;
      for(d = 1; d <= 10; d++){
        if(d == 6){
          continue;
        }
        printf("%d\n", d);
      }

      //Break and Continue in while loop

      int e = 0;
      while(e < 10){
        if(e == 5){
          break;
        }
        printf("%d\n", e);
        e++;
      }

      int f = 0;
      while(f < 10){
        if(f == 5){
          f++;
          continue;
        }
        printf("%d\n", f);
        f++;
      }

      int type[] = {20, 25, 30, 35, 40};
      printf("%d\n", type[0]);

      int type1[] = {20, 25, 30, 40};
       type1[0] = 100;
      printf("%d\n", type1[1]);

      int type2[] = {20, 25, 30, 40, 50};
      int g;
      for(g = 0; g < 4; g++){
        printf("%d\n", type2[g]);
      }

      int type3[4];
      type3[0] = 20;
      type3[1] = 30;
      type3[2] = 35;
      type3[3] = 40;
      printf("%d\n", type3[3]);

      int matrix[2][3] = { {10, 20, 30}, {40, 50, 60} };
      printf("%d\n", matrix[1][1]);

      int Matrix[3][5] = {{10, 20, 30, 15, 25}, {40, 50, 60, 45, 55}, {70, 80, 90, 75, 85,}};
      int k, l;
      for(k = 0; k < 3; k++){
        for(l = 0; l < 5; l++){
          printf("%d\n", Matrix[k][l]);
        }
      }

      char greetings[] = "Hello World!";
      printf("%s\n", greetings);
      printf("%c\n", greetings[0]);

      char Greetings[] = "Hello World";
      Greetings[0] = 'J';
      printf("%s\n", Greetings);

      char carname[] = "Volvo";
      int m;
      for(m = 0; m < 5; ++m){
        printf("%c\n", carname[m]);
      }

      char sumons[] = {'H', 'e', 'l', 'l', 'o', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
      char Sumon[] = "Hello World!";
      printf("%s\n", sumons);
      printf("%s\n", Sumon);

      char txt[] = "We are the so-called \"Vikings\" from the north.";
      printf("%s\n", txt);

      char Txt[] = "It\'s beautiful.";
      printf("%s\n", Txt);

      char txT[] = "The charecter \\ is called backslash.";
      printf("%s\n", txT);

      char alphabet[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
      printf("%d\n", strlen(alphabet));
      printf("%d\n", sizeof(alphabet));

      char str1[20] = "Hello ";
      char str2[] = "world";
      // Concatenate str2 to str1 (the result is stored in str1)
      strcat(str1, str2);
      // Print str1
      printf("%s\n", str1);

      char str3[20] = "Hello World!";
      char str4[20];
      //Copy str3 to str4
      strcpy(str4, str3);
      //Print str4
      printf("%s\n", str4);

      char str5[] = "Hello";
      char str6[] = "Hello";
      char str7[] = "Hi";
      // Compare str5 and str6, and print the result
      printf("%d\n", strcmp(str5, str6));
      
      // Compare str5 and str7, and print the result
      printf("%d\n", strcmp(str5, str7));
      
      // Chapter Name : User Input
      // cree an integer variable that will store the number we get from the user
      int myNumber;

      // Ask the user to type a number
      printf("Type a number and press enter: \n");

      // Get and save the number the user types
      scanf("%d", &myNumber);

      // Print the number the user typed
      printf("Your number is: %d\n", myNumber);

      // Name: Multiple Inputs
      // Create a integer and a character variable
      int number;
      char character;

      // Ask the user to type a number and a character
      printf("Type a number and a character and press enter: \n");

      // Get and save the number the user types
      scanf("%d %c", &number, &character);

      //Print the number
      printf("Your number is: %d\n", number);

      //Print the character
      printf("Your character is: %c\n", character);

    
     return 0;
}