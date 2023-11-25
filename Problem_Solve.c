#include <stdio.h>

int main() {
    // Declare variables
    int number = 1452;
    int sum = 0;

    // Add each digit to the sum
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }

    // Print the result
    printf("The sum of the digits is: %d\n", sum);

 return 0;
}