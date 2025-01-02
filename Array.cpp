#include<iostream>
using namespace std;

int main(){
    int nums[] = {12,23,45,12,-35,-24,67};
    int size = 7;

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i=0; i<size; i++){
        if(nums[i]<smallest){
            smallest = nums[i]; 

        }
        if(nums[i]>largest){
            largest = nums[i];
        }
    }

    cout << " The smallest number is: " << smallest << endl;
    cout << " The largest number is: " << largest << endl;
    return 0;
}








// 📚 1. What is an Array?
// An array is a linear data structure that stores a fixed-size collection of elements of the same data type in 
// contiguous memory locations.

// Key Features:
// Fixed size (static in most languages).
// Elements are stored sequentially.
// Accessed using an index (0-based indexing in most programming languages).
// Example:
// int arr[5] = {10, 20, 30, 40, 50};


// 🛠️ 2. Types of Arrays


// One-Dimensional Array (1D Array)
// Stores data in a single row.
// int arr[5] = {1, 2, 3, 4, 5};


// Two-Dimensional Array (2D Array)
// Stores data in rows and columns (like a matrix).
// int matrix[2][2] = {{1, 2}, {3, 4}};


// Multi-Dimensional Array
// Extends beyond 2D (e.g., 3D, 4D arrays).
// int arr[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};


// ⚙️ 3. Array Operations
// Traversal: Access each element one by one.
// Insertion: Add an element at a specific index.
// Deletion: Remove an element from a specific index.
// Searching: Find an element (e.g., Linear Search, Binary Search).
// Sorting: Arrange elements in order (e.g., Bubble Sort, Quick Sort).
// Updating: Change the value of an element at a specific index.
// Example - Traversal:

// for (int i = 0; i < 5; i++) {
//     cout << arr[i] << " ";
// }


// 📊 4. Advantages of Arrays
// Fast Access: Direct access using the index (O(1) time complexity).
// Memory Efficiency: Elements are stored in contiguous memory.
// Ease of Traversal: Simple iteration using loops.


// ⚠️ 5. Disadvantages of Arrays
// Fixed Size: Cannot grow or shrink dynamically.
// Costly Insertions/Deletions: Shifting elements takes O(n) time.
// Wastage of Space: Unused allocated memory cannot be released.


// 🔍 6. Searching in Arrays
// Linear Search:
// Check each element one by one.
// Time Complexity: O(n)
// Binary Search:
// Works on sorted arrays.
// Time Complexity: O(log n)
// Example - Binary Search:


// int binarySearch(int arr[], int size, int key) {
//     int start = 0, end = size - 1;
//     while (start <= end) {
//         int mid = (start + end) / 2;
//         if (arr[mid] == key) return mid;
//         else if (arr[mid] < key) start = mid + 1;
//         else end = mid - 1;
//     }
//     return -1;
// }




// 📈 7. Sorting in Arrays
// Bubble Sort
// Insertion Sort
// Selection Sort
// Merge Sort
// Quick Sort
// Example - Bubble Sort:

// void bubbleSort(int arr[], int size) {
//     for (int i = 0; i < size - 1; i++) {
//         for (int j = 0; j < size - i - 1; j++) {
//             if (arr[j] > arr[j + 1])
//                 swap(arr[j], arr[j + 1]);
//         }
//     }
// }



// 📦 8. Applications of Arrays
// Storing Data: E.g., marks of students, employee records.
// Matrix Representation: E.g., Graphs, Game Boards.
// Temporary Storage: For computations.
// Implementation of Other Data Structures: Strings, Stacks, Queues, Hash Tables.



// 🧠 9. Time and Space Complexity of Array Operations
// Operation	Time Complexity	Space Complexity
// Access	O(1)	O(1)
// Search	O(n) (Linear)	O(1)
// Insert (end)	O(1)	O(1)
// Insert (middle)	O(n)	O(1)
// Delete	O(n)	O(1)


// 💡 10. Key Points to Remember
// Arrays have fixed sizes.
// Access elements using indices.
// Efficient for searching (sorted arrays).
// Costly insertion and deletion operations.






