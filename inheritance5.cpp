#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    int employeeID;
    double salary;

public:
    void setName(const string& empName) {
        name = empName;
    }

    void setEmployeeID(int empID) {
        employeeID = empID;
    }

    void setSalary(double empSalary) {
        salary = empSalary;
    }

    virtual void displayDetails() const {
        cout << "Name: " << name << "\n";
        cout << "Employee ID: " << employeeID << "\n";
        cout << "Salary: $" << salary << "\n";
    }
};

class Manager : public Employee {
private:
    string department;

public:
    void setDepartment(const string& empDepartment) {
        department = empDepartment;
    }

    void displayDetails() const override {
        Employee::displayDetails();
        cout << "Department: " << department << "\n";
    }
};

class Developer : public Employee {
private:
    string programmingLanguage;

public:
    void setProgrammingLanguage(const string& empLanguage) {
        programmingLanguage = empLanguage;
    }

    void displayDetails() const override {
        Employee::displayDetails();
        cout << "Programming Language: " << programmingLanguage << "\n";
    }
};

class Salesperson : public Employee {
private:
    double commission;

public:
    void setCommission(double empCommission) {
        commission = empCommission;
    }

    void displayDetails() const override {
        Employee::displayDetails();
        cout << "Commission: $" << commission << "\n";
    }
};

int main() {
    Manager manager;
    manager.setName("John Doe");
    manager.setEmployeeID(1001);
    manager.setSalary(70000);
    manager.setDepartment("Sales");

    Developer developer;
    developer.setName("Alice Smith");
    developer.setEmployeeID(1002);
    developer.setSalary(80000);
    developer.setProgrammingLanguage("C++");

    Salesperson salesperson;
    salesperson.setName("Bob Johnson");
    salesperson.setEmployeeID(1003);
    salesperson.setSalary(60000);
    salesperson.setCommission(5000);

    cout << "Manager Details:" << "\n";
    manager.displayDetails();
    cout << "\n";

    cout << "Developer Details:" << "\n";
    developer.displayDetails();
    cout << "\n";

    cout << "Salesperson Details:" << "\n";
    salesperson.displayDetails();
    cout << "\n";

    return 0;
}
