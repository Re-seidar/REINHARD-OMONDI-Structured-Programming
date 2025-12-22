#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declare two integer variables
    int num1 = 15, num2 = 25;

    // Declare two integer pointers
    int *ptr1, *ptr2;

    // Assign addresses to pointers
    ptr1 = &num1;
    ptr2 = &num2;

    // Add values using pointer dereferencing
    int sum = *ptr1 + *ptr2;

    // Print the result
    printf("Sum of %d and %d is: %d\n", *ptr1, *ptr2, sum);

    return 0;
}
