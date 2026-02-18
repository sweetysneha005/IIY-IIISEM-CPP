#include <iostream>
#include <deque>
using namespace std; 
int main() {
deque<int> dq;
// Insertion
dq.push_back(10); // Insert at end
dq.push_back(20);
dq.push_front(5); // Insert at front
cout << "Deque elements after insertion: ";
for (int x : dq)
cout << x << " ";
cout << endl;
// Access front and back elements
cout << "Front element: " << dq.front() << endl;
cout << "Back element: " << dq.back() << endl;
// Deletion
dq.pop_front(); // Remove element from front
dq.pop_back(); // Remove element from back
cout << "Deque elements after deletion: ";
for (int x : dq)
cout << x << " ";
cout << endl;
// Insert more elements
dq.push_back(30);
dq.push_front(15);
cout << "Deque elements after adding more elements: ";
for (int x : dq)
cout << x << " ";
cout << endl;
// Display size
cout << "Size of deque: " << dq.size() << endl;
// Traversal using iterator
cout << "Traversal using iterator: ";
for (auto it = dq.begin(); it != dq.end(); ++it) 
cout << *it << " ";
cout << endl;
return 0;
}
