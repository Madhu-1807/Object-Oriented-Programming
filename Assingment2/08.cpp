/*
Create a program to demonstrate function overloading and overriding. Show
how compile-time and run-time polymorphism differ. Explain when each is useful
in real-world applications.
*/

#include<iostream>
#include<string>

using namespace std;

// Function Overloading
class Printer {
public:
    
    void print(int i) {
        cout << "Printing integer: " << i << endl;
    }

    void print(double d) {
        cout << "Printing double: " << d << endl;
    }

    void print(const char* s) {
        cout << "Printing string: " << s << endl;
    }
};

// Function Overriding
class Shape {
public:
    virtual void draw() {
        cout << "Drawing a generic Shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle " << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a Square " << endl;
    }
};

void drawTheShape(Shape* shapePtr) {
    // At RUN-TIME, the program checks the actual object
    // 'shapePtr' points to and calls the correct 'draw' function.
    shapePtr->draw();
}

int main() {
    cout << "--- Function Overloading (Compile-Time Polymorphism) ---" << endl;
    Printer p;

    // The compiler sees '10' (an int) and binds this call
    // to the 'void print(int)' method.
    p.print(10);

    // The compiler sees '3.14' (a double) and binds this call
    // to the 'void print(double)' method.
    p.print(3.14);

    // The compiler sees '"Hello"' (a const char*) and binds
    // this call to the 'void print(const char*)' method.
    p.print("Hello");

    cout << "--- Function Overriding (Run-Time Polymorphism) ---" << endl;

    // Create objects of the derived classes
    Circle myCircle;
    Square mySquare;
    Shape myShape;

    // --- The key demonstration ---
    
    // Call the function with a pointer to a Circle
    cout << "Passing a Circle object:" << endl;
    drawTheShape(&myCircle); // Output: Drawing a Circle 

    // Call the same function with a pointer to a Square
    cout << "\nPassing a Square object:" << endl;
    drawTheShape(&mySquare); // Output: Drawing a Square

    // Call the same function with a pointer to the base Shape
    cout << "\nPassing a Shape object:" << endl;
    drawTheShape(&myShape);  // Output: Drawing a generic Shape
    
    cout << endl;
    
    return 0;
}