// Recursion is a programming technique where a function calls itself directly or indirectly to solve a 
// smaller instance of a problem until it reaches a base case.



#include <iostream>
using namespace std;

int sum(int n){
    if(n==0) return 0;
    return n + sum(n-1);
}


int main(){
    int n;
    cout<< "Enter a Number: ";
    cin >> n;

    if (n < 0) {
        cout << "Invalid input! Please enter a non-negative number." << endl;
        return 1;
    }

    cout << "Sum of first " << n << " natural numbers is: " << sum(n) << endl;
    return 0;
}