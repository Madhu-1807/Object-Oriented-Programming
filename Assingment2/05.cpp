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
    string name;

public:
    Person(string n) {
        name = n;
    }
    void display() {
        cout << "Name: " << name << endl;
    }
};


class Athlete : public virtual Person { // Note the 'virtual' keyword
protected:
    string sport;
public:
    Athlete(string n, string s) : Person(n) {
        sport = s;
    }
    void displaySport() {
        cout << "Sport: " << sport << endl;
    }
};


class SportsPerson : public virtual Person, public Athlete { // Note 'virtual'
public:
    
    SportsPerson(string n, string s): Person(n), Athlete(n, s) {} // This calls the Athlete constructor.

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