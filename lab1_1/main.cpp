#include "Point.h"
#include "Point3D.h"
#include <iostream>
using namespace std;

double distance3D(Point3D p1, Point3D p2) {
    double dx = p2.getX() - p1.getX();
    double dy = p2.getY() - p1.getY();
    double dz = p2.getZ() - p1.getZ();

    return sqrt(dx*dx + dy*dy + dz*dz);
}

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


    cout<<"\n\n\n";
    //Part 3: Distance between two points
    cout<<"Part 3\n"<<endl;

    double x1, y1, z1;
    double x2, y2, z2;

    cout << "\nEnter the x, y, and z coordinates of your point: ";
    cin >> x1 >> y1 >> z1;

    Point3D a(x1, y1, z1);
    cout << "\nHere is your point: " << a << endl;

    cout << "\nEnter the x, y, and z coordinates of your next point: ";
    cin >> x2 >> y2 >> z2;

    Point3D b(x2, y2, z2);
    cout << "\nHere is your point: " << b << endl;

    double dist = distance3D(a, b);
    cout << "\nThe distance between both points is: " << dist << endl;

    return 0;

}
