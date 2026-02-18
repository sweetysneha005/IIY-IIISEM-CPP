#include <iostream>
using namespace std;
class Employee {
public:
    virtual void showRole() = 0;
};
class Manager : public Employee {
public:
    void showRole() override {
        cout << "I am a Manager. I manage teams." << endl;
    }
};
class Developer : public Employee {
public:
    void showRole() override {
        cout << "I am a Developer. I write code." << endl;
    }
};
int main() {
    Employee* employees[2];
    Manager m;
    Developer d;
    employees[0] = &m;
    employees[1] = &d;

    for (int i = 0; i < 2; ++i) {
        employees[i]->showRole();
    }

    return 0;
}
