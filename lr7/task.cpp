#include <iostream>

using namespace std;

class Rectangle {
protected:
    int x, y;
    int width, height;

public:
    Rectangle(int x, int y, int width, int height) : x(x), y(y), width(width), height(height) {}

    virtual void print() {
        cout << "Rectangle: (" << x << ", " << y << "), width = " << width << ", height = " << height << endl;
    }
};

class Square : public Rectangle {
public:
    Square(int x, int y, int sideSize) : Rectangle(x, y, sideSize, sideSize) {}

    void print() override {
        cout << "Square: (" << x << ", " << y << "), sideSize = " << width << endl;
    }
};

int main() {
    Rectangle rect = Rectangle(10, 20, 100, 50);
    Square square = Square(30, 40, 40);

    rect.print();
    square.print();
    ((Rectangle) square).print();

    return 0;
};