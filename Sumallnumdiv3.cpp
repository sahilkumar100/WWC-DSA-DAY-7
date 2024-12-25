#include <iostream>
using namespace std;

// Function to calculate the sum of numbers divisible by 3 from 1 to n
int sumOfMultiplesOf3(int n) {
    int sum = 0;
    for (int i = 3; i <= n; i += 3) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int result = sumOfMultiplesOf3(n);
    cout << "Sum of all numbers from 1 to " << n << " that are divisible by 3 is: " << result << endl;

    return 0;
}
