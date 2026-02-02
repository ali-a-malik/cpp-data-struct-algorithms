#ifndef POINT3D_H
#define POINT3D_H

#include "Point.h"
#include <iostream>
using namespace std;

class Point3D:public Point {
    protected:
        double z;
    public:
        Point3D();
        Point3D(double x, double y, double z);

        void move();

        friend ostream& operator<<(ostream& out, const Point3D& point);
        
};

#endif