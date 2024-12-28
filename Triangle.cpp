// #include <iostream>
// using namespace std;

// int main() {
//     int n = 6; // Number of rows
//     char ch = 'A'; // Starting character

//     for (int i = 0; i < n; i++) { // Outer loop for rows
//         for (int j = 0; j <= i; j++) { // Inner loop for columns
//             cout << ch << " "; // Print the current character
//         }
//         ch++; // Move to the next character after each row
//         cout << endl; // Move to the next line after each row
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main(){
//     int n = 5; // Number of rows
//     for(int i=0; i<n; i++){
//         for(int j=1; j<i+1; j++){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n = 6;
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j>0; j--){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int n = 5;
//     char ch = 'A';

//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int i = 5;
//     int num =1;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<i; j++){
//             cout<< " " ;
//         }

//         for(int j=0; j<n-i; j++){
//             cout<< (i+1);
//         }
//         cout << endl;
//     }
//     return 0;
// }
 

//  Q.>  1      i=0
//      121     i=1
//     12321    i=2
//    1234321   i=3 


// #include<iostream>
// using namespace std;

// int main(){
//     int n = 5;
//     for(int i=0; i<n; i++){
//         // for space 
//         for(int j=0; j<n-i-1; j++){
//             cout<< " ";
//         }

//         for(int j =1; j<=i+1; j++){
//             cout<< j ;
//         }
//         for(int j=i; j>0; j--){
//             cout<< j ;
//         }
//         cout << endl;
//     }
//     return 0;
// }




#include<iostream>
using namespace std;

int main() {
    int n = 5; // You can change 'n' for a bigger pattern

    // Upper half of the butterfly
    for(int i = 1; i <= n; i++) {
        // Left stars
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Spaces
        for(int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Right stars
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half of the butterfly
    for(int i = n; i >= 1; i--) {
        // Left stars
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Spaces
        for(int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Right stars
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}












