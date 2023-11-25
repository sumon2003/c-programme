#include <stdio.h>

int main() {
    // Declare variables
    int number = 1234;
    int sum = 0;
    int i;
    // Add each digit to the sum
    for(i=0; i<4; i++){
        sum += number % 10;
        number /= 10;
    }

    // Print the result
    printf("The sum of the digits is: %d\n", sum);

 return 0;
}