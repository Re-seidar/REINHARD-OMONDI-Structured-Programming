# REINHARD-OMONDI-Structured-Programming

(1.) Difference Between Normal Variable and Pointer

Normal Variable:

. Stores: Actual data value (e.g., integer, float, character)

. Memory Access: Direct access to its own value

. Reading Values: Directly using variable name

. Modifying Values: Direct assignment using variable name

. Example: int x = 10; stores the value 10

Pointer Variable:

. Stores: Memory address of another variable

. Memory Access: Indirect access to data via address

. Reading Values: Dereferencing using * operator

. Modifying Values: Dereferencing and assignment

. Example: int *ptr = &x; stores the address of x


(2.) Declaration and Definition with Operators

. Normal Variable:

. Pointer Variable:

. Operators:

. -& (Address-of): Gets memory address of a variable

. -* (Dereference): Accesses value at stored address

(3.) Dereferencing a Pointer

-Meaning: Accessing or modifying the value stored at the memory address contained in a pointer.


(4.) Pointer Use Cases vs Normal Variables
   
When to Use Pointers:

. a.Dynamic Memory Allocation:

. b.Large Data Structures:

. c.Function Parameter Passing:

. - Modify multiple variables from function
 
. - Avoid copying large data
 
. - Implement data structures (linked lists, trees)


(5.) Limitations and Risks of Pointers
   
Risks:

- Dangling Pointers: Pointing to deallocated memory

- Memory Leaks: Not freeing allocated memory

- Null Pointer Dereference: Accessing through NULL pointer

- Wild Pointers: Uninitialized pointers

- Buffer Overflows: Writing beyond allocated memory


Mitigation Strategies:

-Always initialize pointers

-Check for NULL before dereferencing

-Use free() for every malloc()

-Avoid returning pointers to local variables


(6.) Call by Value vs Call by Reference

Call by Value:

-Function receives a copy of the data

-Original variable remains unchanged

Call by Reference:

-Function receives address (pointer) to data

-Can modify original variable



(7.) Practical Scenarios

a. When Call by Value is Preferred:

. Small data types (int, char, float)

. When original shouldn't be modified

. Simple calculations

Example: Mathematical functions

b. When Call by Reference is Preferred:

. Large structures/objects

. Need to modify original data

. Returning multiple values

Example: Array operations
