#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false; // Numbers less than or equal to 1 are not prime
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false; // If divisible by any number other than 1 and itself
    }
    return true; // If no divisors found, it's prime
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num))
        cout << num << " is a prime number.\n";
    else
        cout << num << " is not a prime number.\n";

    return 0;
}
