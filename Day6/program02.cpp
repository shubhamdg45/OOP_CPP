#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() const {  // Virtual function
        cout << "Draw." << endl;
    }

    virtual ~Shape() {}  // Virtual destructor
};

// Derived class: Circle
class Circle : public Shape {
public:
    void draw() const override {  // Overriding the base class method
        cout << "Drawing a circle." << endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
public:
    void draw() const override {
        cout << "Drawing a rectangle." << endl;
    }
};

int main() {
    Shape* shape;  // Base class pointer

    Circle circle;
    Rectangle rectangle;

    
    shape = &circle;
    shape->draw();  // Output: Drawing a circle.

    shape = &rectangle;
    shape->draw();  // Output: Drawing a rectangle.

    return 0;
}

