#include <iostream>
using namespace std;

// Recursive function to calculate sum of array elements
int arraySum(int arr[], int size) {
    if (size == 0) 
        return 0; // Base case: Empty array, sum is 0
    return arr[size - 1] + arraySum(arr, size - 1); // Recursive case
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Sum of array elements is: " << arraySum(arr, n) << endl;
    return 0;
}
