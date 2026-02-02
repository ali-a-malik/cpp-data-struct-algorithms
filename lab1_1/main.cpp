#include "Point.h"
#include <iostream>
using namespace std;

int main() {
    // Test default constructor
    Point p1;
    cout << "p1 initial: ";
    p1.print();
    cout << endl;

    // Test parameterized constructor
    Point p2(3.5, 4.5);
    cout << "p2 initial: ";
    p2.print();
    cout << endl;

    // Test move()
    p2.move(1.0, -2.0);
    cout << "p2 after move: ";
    p2.print();
    cout << endl;

    // Test setters
    p1.setX(10);
    p1.setY(20);
    cout << "p1 after setX/setY: ";
    p1.print();
    cout << endl;

    // Test getters
    cout << "p1 x = " << p1.getX() << endl;
    cout << "p1 y = " << p1.getY() << endl;

    return 0;
}
