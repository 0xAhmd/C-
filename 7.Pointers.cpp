/*
Lec 6
Pointers in C++:
1. Pointer declaration
2. Pointer assignment
3. Pointer dereferencing
4. Pointer arithmetic
5. Null pointers
6. Array of pointers

pointers are used to store the memory address of a variable.

*/

#include <iostream>
using namespace std;

void checkIfNullPointer(int *ptr)
{
    if (ptr != nullptr)
    {
        cout << "that is a valid value of memory address" << endl;
    }
    else
    {
        cout << "it is not a valid memory address you can use" << endl;
    }
}

int main()
{
    int *ptr = nullptr; // initializing a pointer to nullptr, which is indicates that the pointer is not pointing to any valid memory address.
    int number = 10;
    int *pointer;
    pointer = &number;
    cout << number << endl;  // the value of the variable directly
    cout << pointer << endl; // memory address that pointer is holding
    cout << &number << endl; // memory address for a variable
    //(we assigned it with our pointer, so the output will be the same)
    cout << *pointer << endl; // the value what pointer holds -> 10

    // test case for some pointers
    int x = 10;
    int *aValidPointer = &x;
    int *inValidPointer = nullptr;

    checkIfNullPointer(aValidPointer);
    checkIfNullPointer(inValidPointer);

    return 0;
}
