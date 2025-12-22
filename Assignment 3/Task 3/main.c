#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declare and initialize integer variable
    int count = 10;

    // Declare integer pointer
    int *pCount;

    // Assign address of count to pCount
    pCount = &count;

    // Modify value of count using pointer
    *pCount = 25;  // Changes count to 25

    // Print updated value
    printf("Updated value of count: %d\n", count);

    return 0;
}
