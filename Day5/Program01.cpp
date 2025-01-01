#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;

public:
    void setName(const string& personName) {
        name = personName;
    }

    void displayName() const {
        cout << "Name: " << name << endl;
    }
};

// Intermediate derived class
class Employee : public Person {
protected:
    int employeeID;

public:
    void setEmployeeID(int id) {
        employeeID = id;
    }

    void displayEmployeeID() const {
        cout << "Employee ID: " << employeeID << endl;
    }
};

// Derived class
class Manager : public Employee {
private:
    string department;

public:
    void setDepartment(const string& dept) {
        department = dept;
    }

    void displayDetails() const {
        displayName();
        displayEmployeeID();
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager manager;

    // Setting values using inherited methods
    manager.setName("Shubham");
    manager.setEmployeeID(12345);
    manager.setDepartment("Software Development");

    // Displaying details
    manager.displayDetails();

    return 0;
}

