/*
Design a simple example that demonstrates abstract classes and pure virtual
functions. Create a base class Shape with a pure virtual function area() and
derive Circle and Square classes. Explain why abstract classes are useful in
large-scale software design.
*/

#include<iostream>
#include<string>

using namespace std;

class Shape {
public:
    
    virtual ~Shape() {}
    virtual double area() = 0;
};

class Circle : public Shape {
private:
    double radius;
    const double PI = 3.14159265;

public:
    Circle(double r) : radius(r) {}

    double area() override {
        return PI * radius * radius;
    }
};


class Square : public Shape {
private:
    double side;

public:
    Square(double s) : side(s) {}

    double area() override {
        return side * side;
    }
};

void printShapeArea(Shape* shapePtr) {
    // Run-time polymorphism: The correct 'area()' is called based on the object shapePtr points to.
    cout << "The calculated area is: " << shapePtr->area() << endl;
}

int main() {
    cout << "Demonstrating Abstract Classes " << endl;

    // You can't do this. It will cause a compile-time error:
    // "cannot declare variable 'myShape' to be of abstract type 'Shape'"
    // Shape myShape;

    // You can create concrete objects.
    Circle myCircle(10.0); // radius of 10
    Square mySquare(7.0);  // side of 7

    // Using the polymorphic function
    cout << "Passing a Circle to the function:" << endl;
    printShapeArea(&myCircle); // Passes a Circle*

    cout << "\nPassing a Square to the function:" << endl;
    printShapeArea(&mySquare); // Passes a Square*

    return 0;
}