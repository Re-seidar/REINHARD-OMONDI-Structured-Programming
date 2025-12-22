#include <stdio.h>
#include <stdlib.h>


//========2. DECLARATION AND DEFINITION WITH OPERATORS==========

//NORMAL VARIABLE
// Declaration (optional for external variables)
extern int var;

// Definition (allocates memory)
int var = 10;  // var stores value 10


//POINTER VARIABLE
// Declaration
int *ptr;      // ptr can store address of an integer

// Definition with initialization
int var = 10;
ptr = &var;    // ptr stores address of var
// OR
int *ptr = &var;


//& (ADDRESS-OF):GETS MEMORY ADDRESS OF VARIABLE

int x = 5;
int *p = &x;  // p stores address of x


//*(DEREFERENCE):ACCESSESS VALUE AT STORED ADDRESS
int value = *p;  // value gets 5 (value at address in p)


//========3. DEREFERENCING A POINTER===========
//:: Accessing or modifying the value stored at the memory address contained in a pointer.

//Example
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


//======4. POINTER USE CASED VS NORMAL VARIABLES======

//1.Dynamic Memory Allocation:

    // When size is unknown at compile time
    int *arr = (int*)malloc(n * sizeof(int));
    // Can resize with realloc()

//2.Large Data Structures:

    struct LargeData { /* many fields */ };
    struct LargeData *dataPtr;  // Efficient passing
    // Instead of copying entire struct

//3.Function Parameter Passing:
    //Example Scenarios:
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


//=====6. CALL BY VALUE VS CALL BY REFERENCE======

//Call by value
//Example
    void incrementByValue(int x) {
        x++;  // Modifies copy
    }

    int main() {
        int num = 5;
        incrementByValue(num);
        printf("%d", num);  // Still 5
        return 0;
    }

//Call by reference
//Example
    void incrementByReference(int *x) {
        (*x)++;  // Modifies original
    }

    int main() {
        int num = 5;
        incrementByReference(&num);
        printf("%d", num);  // Now 6
        return 0;
    }




//7. ======PRACTICAL EXAMPLES====
/*a. When Call by Value is Preferred:
Example: Mathematical functions*/
    double square(double x) {
        return x * x;  // No need to modify original
    }

/*b. When Call by Reference is Preferred:
Example: Array operations*/
    void sortArray(int arr[], int size) {
        // Modifies original array
    }






