/*
Write a program to demonstrate single inheritance. Create a base class Shape
and a derived class Rectangle. Include methods to calculate area and perimeter.
Explain why inheritance is preferred over writing separate classes for each shape.
*/

#include<iostream>
#include<string>

using namespace std;

class Shape {
protected:
    int width;
    int height;

public:
    void setDimensions(int w, int h) {
        width = w;
        height = h;
    }
};

class Rectangle : public Shape {
public:
    
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

    int calculateArea() {
        return width * height;
    }

    
    int calculatePerimeter() {
        return 2 * (width + height);
    }
};

int main() {
    cout << "--- Demonstrating Single Inheritance ---" << endl;

    // object of the derived class.
    Rectangle rect(7, 4);

    cout << "A Rectangle was created with width 7 and height 4." << endl;

    // method specific to the Rectangle class.
    int area = rect.calculateArea();
    cout << "Its area is: " << area << endl;

    // Call another method specific to the Rectangle class.
    int perimeter = rect.calculatePerimeter();
    cout << "Its perimeter is: " << perimeter << endl;

    cout << "\n--- Demonstrating Inherited Method ---" << endl;

    // Call the 'setDimensions' method, which was inherited from the Shape class.
    rect.setDimensions(10, 5);
    cout << "Dimensions have been changed to 10 and 5 using the inherited method." << endl;

    // Recalculate the area to show the change.
    cout << "The new area is: " << rect.calculateArea() << endl;

    return 0;
}