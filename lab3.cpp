// Triangle Area
// Problem : 

// Write a program that reads the base and height of a triangle, calculates the area, and prints the result.

// Note: 
// The area of a triangle is calculated using the formula:
// Triangle Area = 0.5 × base × height
// Input:
// Two real numbers representing the base and height of a triangle.
 
// Output:
// Print the triangle area in the following format:
// Triangle Area = A
// Where A is the calculated area of the triangle.

#include <iostream>
using namespace std;

int main() {
    
    float base; 
    float height;
    cin >>base>>height;
    float Area=(base*height)/2;
    
    cout << "Triangle Area = " << Area;
    return 0;
}
