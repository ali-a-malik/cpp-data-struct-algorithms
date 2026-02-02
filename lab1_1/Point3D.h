#ifndef POINT3D_H
#define POINT3D_H

#include "Point.h"
#include <iostream>

class Point3D:public Point {
    protected:
        double z;
    public:
        Point3D();
        Point3D(double x, double y, double z);

        void move(double xInc, double yInc, double zInc);
        double getZ() const;
        void setZ(double z);
        friend std::ostream& operator<<(std::ostream& out, const Point3D& point);
        
};

#endif