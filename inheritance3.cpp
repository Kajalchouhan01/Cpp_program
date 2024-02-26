#include<iostream>
#include <string>
using namespace std;

class Shape {
protected:
    string color;
public:
    virtual double getArea() const = 0;

    void setColor(const string& colour) {
        color = colour;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(const string& color, double radius) {
        setColor(color);
        this->radius = radius;
    }
    
    double getArea() const override {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(const string& color, double width, double height) {
        setColor(color);
        this->width = width;
        this->height = height;
    }

    double getArea() const override {
        return width * height;
    }
};

class Triangle : public Shape {
private:
    double base, height;
public:
    Triangle(const string& color, double base, double height) {
        setColor(color);
        this->base = base;
        this->height = height;
    }

    double getArea() const override {
        return 0.5 * base * height;
    }
};

int main() {
    Circle circle("red", 5);
    cout << "Area of circle: " << circle.getArea() << "\n";

    Rectangle rectangle("blue", 4, 6);
    cout << "Area of rectangle: " << rectangle.getArea() << "\n";

    Triangle triangle("green", 3, 8);
    cout << "Area of triangle: " << triangle.getArea() << "\n";

    return 0;
}
