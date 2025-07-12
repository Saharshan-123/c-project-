#include <stdio.h> // Include the standard input/output library

void reverse() {
    int num, reversedNum = 0, remainder; // Declare variables

    printf("Enter an integer: "); // Prompt the user for input
    scanf("%d", &num); // Read the integer from the user

    while (num != 0) { // Loop until the original number becomes 0
        remainder = num % 10; // Get the last digit
        reversedNum = reversedNum * 10 + remainder; // Build the reversed number
        num /= 10; // Remove the last digit from the original number
    }

    printf("Reversed Number = %d\n", reversedNum); // Print the reversed number

   // Indicate successful program execution
}
