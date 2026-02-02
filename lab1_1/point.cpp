#include "Point.h"
#include <iostream>
using namespace std;

Point::Point() {
    x = 0;
    y = 0;
}

Point::Point(double x, double y) {
    this->x = x;
    this->y = y;
}

void Point::move(double xInc, double yInc) {
    x += xInc;
    y += yInc;
}

void Point::print() {
    cout << "(" << x << "," << y << ")";
}

double Point::getX() {
    return x;
}

double Point::getY() {
    return y;
}

void Point::setX(double x) {
    this->x = x;
}

void Point::setY(double y) {
    this->y = y;
}
