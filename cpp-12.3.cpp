#include <iostream>
#include <map>
#include <string>
int main() {
std::map<std::string, int> myMap;
// Insertion
myMap["apple"] = 5;
myMap["banana"] = 3;
myMap.insert({"orange", 7});
// Access
std::cout << "apple: " << myMap["apple"] << std::endl;
std::cout << "banana: " << myMap.at("banana") << std::endl;
// Searching
auto it = myMap.find("orange");
if (it != myMap.end()) {
std::cout << "Found orange: " << it->second << std::endl;
} else {
std::cout << "orange not found" << std::endl;
}
// Deletion
myMap.erase("banana");
std::cout << "After deleting banana:" << std::endl;
for (const auto& pair : myMap) {
std::cout << pair.first << ": " << pair.second << std::endl;
}
return 0;
}
