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
