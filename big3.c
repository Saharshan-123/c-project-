#include <stdio.h>

void biggest3() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3); // Take input from the user

    if (num1 >= num2 && num1 >= num3) { // Check if num1 is the largest
        printf("The largest number is: %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) { // Check if num2 is the largest
        printf("The largest number is: %d\n", num2);
    } else { // If neither of the above, num3 must be the largest
        printf("The largest number is: %d\n", num3);
    }

}
