#include <stdio.h> // Include the standard input/output library

void palindrome() {
    int num, originalNum, reversedNum = 0, remainder; // Declare and initialize variables

    printf("Enter an integer: "); // Prompt the user for input
    scanf("%d", &num); // Read the integer from the user and store it in 'num'

    originalNum = num; // Store the original number in 'originalNum'

    // Loop to reverse the number
    while (num != 0) {
        remainder = num % 10; // Extract the last digit
        reversedNum = reversedNum * 10 + remainder; // Build the reversed number
        num /= 10; // Remove the last digit from the original number
    }

    // Compare the original and reversed numbers
    if (originalNum == reversedNum) {
        printf("%d is a palindrome number.\n", originalNum); // Print if it's a palindrome
    } else {
        printf("%d is not a palindrome number.\n", originalNum); // Print if it's not a palindrome
    }

   // Indicate successful program execution
}

