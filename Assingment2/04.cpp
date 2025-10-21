/*
Implement a program demonstrating multilevel inheritance. For example: Person
→ Employee → Manager. Show how data and functions are passed through the
inheritance chain. Explain why access specifiers matter here.
*/

#include<iostream>
#include<string>

using namespace std;

class Person {
protected:
    string name;

public:
    Person(string n) {
        name = n;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
    }
};


class Employee : public Person {
protected:
    int employeeID;

public:
    // The constructor for Employee  calls the constructor for Person.
    Employee(string n, int id) : Person(n) {
        employeeID = id;
    }

    void displayEmployee() {
        displayPerson();
        cout << "Employee ID: " << employeeID << endl;
    }
};


class Manager : public Employee {
private:
    string department;

public:
    Manager(string n, int id, string dept) : Employee(n, id) {
        department = dept;
    }

    void displayManager() {
        displayEmployee();
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager mgr("Alice Smith", 901, "Engineering");

    cout << "\n--- Displaying Manager Details ---" << endl;
    mgr.displayManager();

    cout << "\n--- Accessing Inherited Functions Directly ---" << endl;
    cout << "Calling displayEmployee() from Manager:" << endl;
    mgr.displayEmployee();

    cout << "\nCalling displayPerson() from Manager:" << endl;
    mgr.displayPerson();

    return 0;
}