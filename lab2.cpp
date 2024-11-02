// cin Exercise
// Problem : 
// Given five variables of types (integer, long, character, float, and double), read their values and print them separately, each on a line. 
 
// Input:
// One line containing five space-separated values in the following order: integer, long, character, float, and double.
 
// Output:
// Print each variable's value on a separate line.

#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int a; 
    long b;
    char c;
    double d;
    long double e;
    
    cin >> a >> b >> c >> d >> e ; 
    
    cout << a << endl << b << endl << c << endl << d << endl ;
    cout << setprecision(10) << e   ; 

    return 0;
}
