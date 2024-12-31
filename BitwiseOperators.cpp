#include<iostream>
using namespace std;

int main() {
    int a = 6, b = 10; // Example numbers
    
    cout << "a = " << a << ", b = " << b << endl;
    cout << "Bitwise AND (a & b): " << (a & b) << endl; // AND
    cout << "Bitwise OR (a | b): " << (a | b) << endl;  // OR
    cout << "Bitwise XOR (a ^ b): " << (a ^ b) << endl; // XOR
    cout << "Bitwise NOT (~a): " << (~a) << endl;       // NOT
    cout << "Left Shift (a << 1): " << (a << 1) << endl; // Left Shift
    cout << "Right Shift (a >> 1): " << (a >> 1) << endl; // Right Shift

    return 0;
}


// 1. Types of Data Modifiers


// a. Signed
// Default modifier for int, char, and float.
// Allows negative and positive values.
// Example:
// signed int x = -10;
// signed char y = 'A';



// b. Unsigned
// Only allows positive values (including zero).
// Provides a larger positive range compared to signed.
// Example:
// unsigned int x = 100;
// unsigned char y = 255;


// c. Short
// Reduces the size of an integer (usually 2 bytes).
// Useful for memory optimization.
// Example:
// short int x = 32000;


// d. Long
// Increases the size of an integer (usually 4 or 8 bytes).
// Used for storing larger integers.
// Example:
// long int x = 100000;
// long long int y = 10000000000;
























