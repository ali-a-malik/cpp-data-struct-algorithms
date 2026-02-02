#include "Point3D.h"
#include <iostream>
using namespace std;

Point3D::Point3D() : Point(), z(0) {}

Point3D::Point3D(double x, double y, double z)
    : Point(x, y), z(z) {}

void Point3D::move(double xInc, double yInc, double zInc){
    x+=xInc;
    y+=yInc;
    z+=zInc;
}

void Point3D::setZ(double z){
    this->z = z;
}

double Point3D::getZ() const{
    return z;
}
    
ostream& operator<<(ostream& out, const Point3D& point){
    out<<"("<<point.x<<","<<point.y<<","<<point.z<<")";
    return out;
}