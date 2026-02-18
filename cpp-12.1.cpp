#include <iostream>
#include <list>
int main() {
std::list<int> myList;
// Insertion
myList.push_back(10);
myList.push_back(20);
myList.push_front(5);
std::cout << "List after insertion: ";
for (int val : myList)
std::cout << val << " ";
std::cout << std::endl;
// Deletion
myList.pop_front(); // Removes 5
myList.remove(20); // Removes 20
std::cout << "List after deletion: ";
for (int val : myList)
std::cout << val << " ";
std::cout << std::endl;
return 0;
}
