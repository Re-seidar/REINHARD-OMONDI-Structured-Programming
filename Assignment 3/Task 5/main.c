#include <stdio.h>
#include <stdlib.h>

// Function to swap two numbers using pointers
void swapNumbers(int *ptrA, int *ptrB) {
    int temp = *ptrA;  // Store value at address ptrA
    *ptrA = *ptrB;     // Put value at ptrB into ptrA
    *ptrB = temp;      // Put temp value into ptrB
}

int main() {
    // Declare and initialize two variables
    int a = 5, b = 10;

    // Print values before swapping
    printf("Before swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    // Call swap function with addresses
    swapNumbers(&a, &b);

    // Print values after swapping
    printf("After swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
