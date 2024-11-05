/*
Lec 2
Operators in C++:
1. Arithmetic (+,-,*,/,%)
2. Assignment (=, +=, -=, *=, /=, %=, >>=, <<=, &=, ^=, |=)
3. Comparison (==, !=, >, <, >=, <=)
4. Logical (AND, OR, NOT)
5. Bitwise (AND, OR, XOR) symbols -> (&, |, ^)
6. Ternary Operator (short form of if-else)
*/

#include <iostream>
using namespace std;

int main()
{
    // Arithmetic Operations
    int a = 1, b = 2;
    int sum = a + b;   // Addition
    int sub = a - b;   // Subtraction
    int mul = a * b;   // Multiplication
    int div = a / b;   // Division (integer division)
    int mod = a % b;   // Modulus (remainder)

    // Assignment Operations
    int x = 1, y = 2, z = 3;
    x += y;  // x = x + y
    y -= z;  // y = y - z
    z *= x;  // z = z * x
    if (y != 0) {  // Avoid division by zero
        x /= y;    // x = x / y
    }
    y %= z;  // y = y % z

    // Comparison Operations
    bool comparisonResult;
    comparisonResult = (a == b); // Equal to
    comparisonResult = (a != b); // Not equal to
    comparisonResult = (a > b);  // Greater than
    comparisonResult = (a < b);  // Less than
    comparisonResult = (a >= b); // Greater than or equal to
    comparisonResult = (a <= b); // Less than or equal to

    // Logical Operations
    bool logicalResult;
    logicalResult = (true && false); // AND
    logicalResult = (true || false); // OR
    logicalResult = !logicalResult;  // NOT

    // Bitwise Operations
    int bitwiseAnd = a & b;  // Bitwise AND
    int bitwiseOr = a | b;   // Bitwise OR
    int bitwiseXor = a ^ b;  // Bitwise XOR

    // Ternary Operator
    int maxVal = (a > b) ? a : b; // Returns a if a > b, else returns b

    return 0;
}
