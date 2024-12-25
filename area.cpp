// Medium:

// 1)	Function Overloading for Calculating Area.
// Objective

// Write a program to calculate the area of different shapes using function overloading. Implement overloaded functions to compute the area of a circle, a rectangle, and a triangle.  

// Input Format 
// The program should accept:  
// 1. Radius of the circle for the first function.  
// 2. Length and breadth of the rectangle for the second function.  
// 3. Base and height of the triangle for the third function.  

// Constraints  
//  1 ≤ radius, length, breadth, base, height ≤ 103  
// Use 3.14159 for the value of π.  

// Output Format  
// Print the computed area of each shape in a new line.

// Test Cases:

// Example 1

// Input:  

// Radius = 5  
// Length = 4, breadth = 6  
// Base = 3, height = 7  

// Output:  
// 78.53975  
// 24  
// 10.5  

// Explanation:
// ●	The area of the circle with radius 5 is 3.14159* 52 = 78.53975.  
// ●	The area of the rectangle with length 4 and breadth 6 is 4* 6 = 24.  
// ●	The area of the triangle with base 3 and height 7 is 0.5*3*7 = 10.5.  


// Overloading in programming, particularly in C++, refers to the ability to define multiple functions or 
// operators with the same name but with different parameter types or a different number of parameters. The 
// compiler differentiates these functions based on the number or types of arguments passed during the function 
// call.









#include <iostream>
using namespace std;


// for circle 

double area (double radius){
    return 3.14159 * radius * radius;

}

// for rectangle 

int area(int length, int breadth) {
    return length * breadth;
}

int area(double base , double height){
    return 0.5 * base * height;

}

int main(){
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    int length , breadth;
    cout << "Enter the length and breadth of the rectangle: ";
    cin >> length >> breadth;

    double base , height;
    cout << "Enter the base and height of the traingle: ";
    cin >> base >> height;


    cout << " Area of the circle is: " << area(radius) << endl;
    cout << " Area of the rectangle is: " << area(length , breadth) << endl;
    cout << " Area of the trangle is: " << area(base, height) << endl;

    return 0;

}

