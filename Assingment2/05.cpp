/*
Create a program that demonstrates multiple inheritance. Example: A class
SportsPerson inherits from both Person and Athlete. Explain what ambiguity
arises and how you resolved it using scope resolution or virtual base classes.
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
    void display() {
        cout << "Name: " << name << endl;
    }
};


class Athlete : public virtual Person { // Note the 'virtual' keyword
protected:
    char sport[100];
public:
    Athlete(const char* n, const char* s) : Person(n) {
        StringCopy(sport, s, 100);
    }
    void displaySport() {
        cout << "Sport: " << sport << endl;
    }
};


class SportsPerson : public virtual Person, public Athlete { // Note 'virtual'
public:
    
    SportsPerson(const char* n, const char* s): Person(n), Athlete(n, s) {} // This calls the Athlete constructor.

    void displayAll() {
        display();      
        displaySport(); // Inherited from Athlete
    }
};

int main() {
    cout << "--- Resolution with Virtual Base Classes ---" << endl;
    SportsPerson spv("Bob", "Basketball");

    cout << "Calling display() (no ambiguity):" << endl;
    
    spv.display();

    cout << "\nCalling displayAll():" << endl;
    spv.displayAll();

    return 0;
}