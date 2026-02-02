#ifndef POINT_H
#define POINT_H

class Point {
protected:
    double x;
    double y;

public:
    Point();
    Point(double x, double y);

    void move(double xInc, double yInc);
    void print();

    double getX();
    double getY();

    void setX(double x);
    void setY(double y);
};

#endif
