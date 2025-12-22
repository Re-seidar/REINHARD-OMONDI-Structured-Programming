#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

// Function using pass by value
void incrementByValue(int num) {
    num++;  // Only modifies local copy
    printf("Inside incrementByValue: %d\n", num);
}

// Function using pass by reference
void incrementByReference(int *numPtr) {
    (*numPtr)++;  // Modifies original variable
    printf("Inside incrementByReference: %d\n", *numPtr);
}

int main() {
    int number = 5;

    printf("Initial value: %d\n\n", number);

    // Call by value
    incrementByValue(number);
    printf("After incrementByValue: %d\n\n", number);

    // Call by reference
    incrementByReference(&number);
    printf("After incrementByReference: %d\n", number);

    return 0;
}
