#include <iostream> 
using namespace std; 
 
// Call by Value 
void callByValue(int x) { 
    x = x + 10; 
    cout << "Inside callByValue: x = " << x << endl; 
} 
 
// Call by Reference 
void callByReference(int &y) { 
    y = y + 20; 
    cout << "Inside callByReference: y = " << y << endl; 
} 
 
 
 
int main() { 
    int a, b; 
    // Get input from the user 
    cout << "Enter a number for Call by Value: "; 
    cin >> a; 
    cout << "Enter a number for Call by Reference: "; 
    cin >> b; 
    // Call by Value 
    cout << "\nBefore callByValue: a = " << a << endl; 
    callByValue(a); 
    cout << "After callByValue: a = " << a << endl; 
    // Call by Reference 
    cout << "\nBefore callByReference: b = " << b << endl; 
    callByReference(b); 
    cout << "After callByReference: b = " << b << endl; 
    return 0; 
} 
