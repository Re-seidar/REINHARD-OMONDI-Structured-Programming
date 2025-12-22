# REINHARD-OMONDI-Structured-Programming

1. Difference Between Normal Variable and Pointer
Normal Variable:

Stores: Actual data value (e.g., integer, float, character)

Memory Access: Direct access to its own value

Reading Values: Directly using variable name

Modifying Values: Direct assignment using variable name

Example: int x = 10; stores the value 10

Pointer Variable:

Stores: Memory address of another variable

Memory Access: Indirect access to data via address

Reading Values: Dereferencing using * operator

Modifying Values: Dereferencing and assignment

Example: int *ptr = &x; stores the address of x

2. Declaration and Definition with Operators
Normal Variable:
// Declaration (optional for external variables)
extern int var;

// Definition (allocates memory)
int var = 10;  // var stores value 10

Pointer Variable:

// Declaration
int *ptr;      // ptr can store address of an integer

// Definition with initialization
int var = 10;
ptr = &var;    // ptr stores address of var
// OR
int *ptr = &var;

Operators:

& (Address-of): Gets memory address of a variable

int x = 5;
int *p = &x;  // p stores address of x
* (Dereference): Accesses value at stored address

c
int value = *p;  // value gets 5 (value at address in p)

3. Dereferencing a Pointer
Meaning: Accessing or modifying the value stored at the memory address contained in a pointer.

Example:

#include <stdio.h>

int main() {
    int num = 42;      // Normal variable
    int *ptr = &num;   // Pointer stores address of num
    
    printf("Value of num: %d\n", num);          // Direct access: 42
    printf("Address of num: %p\n", &num);       // Memory address
    printf("Value in ptr: %p\n", ptr);          // Same address as &num
    printf("Dereferenced ptr: %d\n", *ptr);     // Indirect access: 42
    
    // Modifying value through pointer
    *ptr = 100;        // Changes num to 100
    printf("New value of num: %d\n", num);      // Now 100
    
    return 0;
}
4. Pointer Use Cases vs Normal Variables
When to Use Pointers:

Dynamic Memory Allocation:

// When size is unknown at compile time
int *arr = (int*)malloc(n * sizeof(int));
// Can resize with realloc()
Large Data Structures:

struct LargeData { /* many fields */ };
struct LargeData *dataPtr;  // Efficient passing
// Instead of copying entire struct
Function Parameter Passing:

Modify multiple variables from function

Avoid copying large data

Implement data structures (linked lists, trees)

Example Scenarios:

// Scenario 1: Array manipulation
void modifyArray(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        arr[i] *= 2;  // Modifies original array
    }
}

// Scenario 2: Returning multiple values
void getMinMax(int arr[], int n, int *min, int *max) {
    *min = arr[0];
    *max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < *min) *min = arr[i];
        if(arr[i] > *max) *max = arr[i];
    }
}
5. Limitations and Risks of Pointers
Risks:

Dangling Pointers: Pointing to deallocated memory

Memory Leaks: Not freeing allocated memory

Null Pointer Dereference: Accessing through NULL pointer

Wild Pointers: Uninitialized pointers

Buffer Overflows: Writing beyond allocated memory

Mitigation Strategies:

Always initialize pointers

Check for NULL before dereferencing

Use free() for every malloc()

Avoid returning pointers to local variables

6. Call by Value vs Call by Reference
Call by Value:

Function receives a copy of the data

Original variable remains unchanged

Example:

void incrementByValue(int x) {
    x++;  // Modifies copy
}

int main() {
    int num = 5;
    incrementByValue(num);
    printf("%d", num);  // Still 5
    return 0;
}
Call by Reference:

Function receives address (pointer) to data

Can modify original variable

Example:

void incrementByReference(int *x) {
    (*x)++;  // Modifies original
}

int main() {
    int num = 5;
    incrementByReference(&num);
    printf("%d", num);  // Now 6
    return 0;
}
7. Practical Scenarios
a. When Call by Value is Preferred:

Small data types (int, char, float)

When original shouldn't be modified

Simple calculations

Example: Mathematical functions

double square(double x) {
    return x * x;  // No need to modify original
}
b. When Call by Reference is Preferred:

Large structures/objects

Need to modify original data

Returning multiple values

Example: Array operations

void sortArray(int arr[], int size) {
    // Modifies original array
}
