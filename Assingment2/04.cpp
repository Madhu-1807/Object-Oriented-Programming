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
    char name[100];

    void StringCopy(char* dest, const char* src, int destSize) {
        int i = 0;
        while (src[i] != '\0' && i < (destSize - 1)) {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }

public:
    Person(const char* n) {
        StringCopy(name, n, 100);
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
    Employee(const char* n, int id) : Person(n) {
        employeeID = id;
    }

    void displayEmployee() {
        displayPerson();
        cout << "Employee ID: " << employeeID << endl;
    }
};


class Manager : public Employee {
private:
    char department[100];

public:
    Manager(const char* n, int id, const char* dept) : Employee(n, id) {
        int i = 0;
        while (dept[i] != '\0' && i < 99) {
            department[i] = dept[i];
            i++;
        }
        department[i] = '\0';
    }

    void displayManager() {
        displayEmployee();
        cout << "Department: " << department << endl;
    }
};

/**
 * @brief Main function to demonstrate the inheritance chain.
 */
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