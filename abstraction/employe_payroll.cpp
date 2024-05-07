#include <iostream>

using namespace std;

class Employee {
private:
    string name;
    int ID;
    float salary;

public:
    Employee(string n, int id, float s) : name(n), ID(id), salary(s) {}

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "ID: " << ID << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Employee emp("John Doe", 12345, 50000);
    emp.displayDetails();
    return 0;
}
