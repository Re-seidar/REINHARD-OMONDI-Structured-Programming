#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declare and initialize integer variable
    int num = 15;

    // Declare integer pointer
    int *ptr;

    // Store address of num in ptr
    ptr = &num;

    // Print the required information
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value stored in ptr: %p\n", ptr);
    printf("Value accessed using *ptr: %d\n", *ptr);

    return 0;
}
