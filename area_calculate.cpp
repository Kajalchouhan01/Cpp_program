#include <iostream>

using namespace std;

class Shape {
public:
    virtual float area() = 0; // Pure virtual function to calculate area
};

class Square : public Shape {
private:
    float side;

public:
    Square(float s) : side(s) {}

    float area() {
        return side * side;
    }
};

class Triangle : public Shape {
private:
    float base, height;

public:
    Triangle(float b, float h) : base(b), height(h) {}

    float area() {
        return 0.5 * base * height;
    }
};

class Rectangle : public Shape {
private:
    float length, width;

public:
    Rectangle(float l, float w) : length(l), width(w) {}

    float area() {
        return length * width;
    }
};

int main() {
    // Creating objects of different shapes
    Square square(5);
    Triangle triangle(4, 6);
    Rectangle rectangle(3, 7);

    // Calculating and printing areas
    cout << "Area of Square: " << square.area() << endl;
    cout << "Area of Triangle: " << triangle.area() << endl;
    cout << "Area of Rectangle: " << rectangle.area() << endl;

    return 0;
}
