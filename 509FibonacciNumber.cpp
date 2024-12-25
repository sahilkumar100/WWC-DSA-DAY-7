// The Fibonacci series is a sequence of numbers where each number is the sum of the two preceding ones, 
// starting from 0 and 1. It is defined as:

// 0,1,1,2,3,5,8,13,21,34


#include <iostream>
using namespace std;

// Function to calculate Fibonacci number
int fibonacci(int n) {
    if (n == 0) 
        return 0; // Base case
    if (n == 1) 
        return 1; // Base case
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "F(" << n << ") = " << fibonacci(n) << endl;
    return 0;
}
