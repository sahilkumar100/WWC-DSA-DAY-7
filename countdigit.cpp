#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n > 0) {
        // Count digits using a loop
        while (n != 0) {
            n /= 10; // Remove the last digit
            count++;
        }
        cout << "The total number of digits is: " << count << endl;
    } else {
        cout << "Please enter a positive integer." << endl;
    }

    return 0;
}
