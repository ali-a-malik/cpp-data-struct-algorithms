#include "Point.h"
#include "Point3D.h"
#include <iostream>
using namespace std;

int main() {
    // Part 1
    cout<<"Part 1\n"<<endl;
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


    cout<<"\n\n\n";

     // Part 2: Testing Point3D
    cout<<"Part 2\n"<<endl;
    Point3D p3;
    cout << "p3 initial: " << p3 << endl;

    Point3D p4(1.0, 2.0, 3.0);
    cout << "p4 initial: " << p4 << endl;

    p4.move(1.0, -1.0, 2.0);
    cout << "p4 after move: " << p4 << endl;

    p4.setZ(10.0);
    cout << "p4 after setZ: " << p4 << endl;

    cout << "p4 z = " << p4.getZ() << endl;

    return 0;


}
