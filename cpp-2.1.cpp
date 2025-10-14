
#include <iostream> 
using namespace std; 
// Global variable 
int a = 50; 
// Custom namespace 
namespace MyNamespace { 
    void showMessage() { 
        cout << "This is a message from MyNamespace." << endl; 
    } 
} 
int main() { 
    int a;  // Local variable 
    // Take user input for local variable 
    cout << "Enter a local value for a: "; 
    cin >> a; 
    // Display values using scope resolution 
    cout << "Global value (::a): " << ::a << endl; 
    cout << "Sum of local and global (a + ::a): " << a + ::a << endl; 
    cout << "Sum of local and local (a + a): " << a + a << endl; 
    // Use function from custom namespace 
    MyNamespace::showMessage(); 
    return 0; 
}
