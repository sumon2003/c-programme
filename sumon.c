#include<stdio.h>
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

    int x = 55;
    printf("%d\n", --x);

    int y = 50;
    y -= 5;
    printf("%d\n", y);

    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("%lu\n", sizeof(myInt));
     printf("%lu\n", sizeof(myFloat));
      printf("%lu\n", sizeof(myDouble));
       printf("%lu\n", sizeof(myChar));
        


     return 0;
}