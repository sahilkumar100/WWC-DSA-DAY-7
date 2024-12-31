#include<iostream>
using namespace std;

int decToBinary(int decNum){
    int ans = 0, pow = 1;  // Initialize the result and power of 10
    while (decNum > 0) {
        int rem = decNum % 2;  // Get the remainder (either 0 or 1)
        decNum = decNum / 2;   // Divide the number by 2

        ans = ans + (rem * pow);  // Add the remainder to the answer at the current power of 10
        pow = pow * 10;  // Increase power of 10 (shift left in binary)
    }
    return ans;
}

int main() {
    int decNum = 50;

    for (int i = 1; i <= 10; i++) {
        cout << decToBinary(i) << endl;  // Print the binary representation for each number
    }
    return 0;
}
