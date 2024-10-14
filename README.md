# Stack

Linear data structure that follows the LIFO order of operations
## Theory
 A stack is a linear data structure in which elements can be inserted and deleted only from one side of the list, called the top. A stack follows the LIFO (Last In First Out) principle, i.e., the element inserted at the last is the first element to come out. The insertion of an element into the stack is called push operation, and the deletion of an element from the stack is called pop operation. In stack, we always keep track of the last element present in the list with a pointer called top.



Applications of stack:

1. Some CPUs have their entire assembly language based on the concept of performing operations on registers that are stored in a stack.
2. Stack structure is used in the C++ run-time system.

## Explaination of the Output
- The function```Push()``` in the class Stack is used to add an element in the stack.
- The function ```Pop()``` in the class Stacks is used to remove an Element from the stack.
- The function ```Peak()``` in the class Stacks is used to print/see the topmost element of the stack.
- The function ```Print()``` in the class Stacxk is used to print all the elements in the stack.
- The Stack is empty, hence the first line outputs the stack is empty.
- We **Push** the elements **10** and **20** into the stack and then **Print** the stack.
- We **Pop** the element **20** and then **Print** the stack.
- We **Push** the elements **30** and **40** and **Peek** at the topmost elemenst of the stack.
- We **Push** the elements **50**,**60** and **70** but theres no space for **70** so we get the output as the stack is full.
- We **Print** the stack.
- 
- ## Algorithm of the Stack Program

1. **Start**
2. Create a class `Stack` with:
   - An integer variable `capacity` to hold the maximum number of elements.
   - An integer variable `top` initialized to -1 to keep track of the topmost element of the stack.
   - A dynamic array `arr` to store elements of the stack.
3. **Push Operation**:
   - Check if `top < capacity - 1`:
     - If true, increment `top` and assign the new element to `arr[top]`.
     - If false, print "Stack Overflow".
4. **Pop Operation**:
   - Check if `top >= 0`:
     - If true, decrement `top` to remove the top element.
     - If false, print "Stack Underflow".
5. **Peek Operation**:
   - Check if `top >= 0`:
     - If true, return `arr[top]` (the topmost element).
     - If false, return -1 to indicate the stack is empty.
6. In the `main` function:
   - Create a stack `st` with a capacity of 5.
   - Push elements 23, 24, and 25 into the stack.
   - Print the top element using `peek()`.
   - Pop the top element and print the new top element using `peek()`.
7. **End**
