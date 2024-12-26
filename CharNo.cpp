#include <iostream>
using namespace std;

int main() {
    int n = 3; // Size of the square
    char ch = 'A'; // Starting number

    for (int i = 0; i < n; i++) { // Outer loop for rows
        for (int j = 0; j <n; j++) { // Inner loop for columns
            cout << ch << " ";
            ch++;
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}
