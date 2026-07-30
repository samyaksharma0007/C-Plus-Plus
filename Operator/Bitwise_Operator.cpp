// Bitwise Operator
// & - AND
// | - OR
// ~ - NOT
// << - shift the bits to right side
// >> - shift the bits to left side
// ^ - XOR(Exclusive OR)

#include<iostream>
using namespace std;


int main() {
    // Input values for demonstration
    unsigned int a = 12; // Binary: 0000 1100
    unsigned int b = 25; // Binary: 0001 1001

    cout << "Initial values:\n";
    cout << "a = " << a << " (Binary: 00001100)\n";
    cout << "b = " << b << " (Binary: 00011001)\n\n";

    // 1. Bitwise AND (&)
    // Rule: Result is 1 only if both bits are 1.
    // 0000 1100 & 0001 1001 = 0000 1000 (Decimal 8)
    cout << "a & b  = " << (a & b) << "  (Bitwise AND)\n";

    // 2. Bitwise OR (|)
    // Rule: Result is 1 if at least one bit is 1.
    // 0000 1100 | 0001 1001 = 0001 1101 (Decimal 29)
    cout << "a | b  = " << (a | b) << " (Bitwise OR)\n";

    // 3. Bitwise XOR (^)
    // Rule: Result is 1 if bits are different.
    // 0000 1100 ^ 0001 1001 = 0001 0101 (Decimal 21)
    cout << "a ^ b  = " << (a ^ b) << " (Bitwise XOR)\n";

    // 4. Bitwise NOT (~)
    // Rule: Inverts all the bits (0 becomes 1, 1 becomes 0).
    // Note: Depends on data type storage size. 
    cout << "~a     = " << (~a) << " (Bitwise NOT)\n";

    // 5. Left Shift (<<)
    // Rule: Shifts bits to the left, fills empty spaces with 0. 
    // Effectively multiplies the number by 2^n.
    // 0000 1100 << 2 = 0011 0000 (Decimal 48)
    cout << "a << 2 = " << (a << 2) << " (Left Shift by 2)\n";

    // 6. Right Shift (>>)
    // Rule: Shifts bits to the right, discards shifted bits.
    // Effectively integer divides the number by 2^n.
    // 0000 1100 >> 2 = 0000 0011 (Decimal 3)
    cout << "a >> 2 = " << (a >> 2) << "  (Right Shift by 2)\n";

    return 0;
}