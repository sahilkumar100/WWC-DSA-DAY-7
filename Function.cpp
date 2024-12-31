// A function in C++ is a block of code designed to perform a specific task. It helps in breaking down a large 
// program into smaller, manageable parts, making code reusable, organized, and easier to debug.

// 1. Simple Function (Addition of Two Numbers)
// ===========================================
// #include <iostream>
// using namespace std;

// int add(int a, int b) {
//     return a + b;
// }

// int main() {
//     cout << "Sum: " << add(5, 3);
//     return 0;
// }



// 2. Function Without Return (Display Message)
// #include <iostream>
// using namespace std;

// void greet() {
//     cout << "Hello, welcome to C++ programming!" << endl;
// }

// int main() {
//     greet();
//     return 0;
// }



// 3. Function with Default Argument
// #include <iostream>
// using namespace std;

// void display(string message = "Default Message") {
//     cout << message << endl;
// }

// int main() {
//     display(); // Uses default argument
//     display("Custom Message"); // Overrides default
//     return 0;
// }



// 4. Inline Function

// #include <iostream>
// using namespace std;

// inline int square(int x) {
//     return x * x;
// }

// int main() {
//     cout << "Square: " << square(4);
//     return 0;
// }




// 5. Function Overloading
#include <iostream>
using namespace std;

int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

int main() {
    cout << multiply(3, 4) << endl;
    cout << multiply(2.5, 3.5) << endl;
    return 0;
}





















