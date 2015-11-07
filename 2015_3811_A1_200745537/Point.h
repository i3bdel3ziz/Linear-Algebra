#ifndef POINT_H_
#define POINT_H_

#include <iostream>
using namespace std;

class Point
{
private:
    // Four dimensions.
    double x, y, z, w;
protected:
    int dimension;

public:
    Point();
    // Construct the Point in 2D or 3D.
    Point(double x, double y);
    Point(double x, double y, double z);

    // Get the values of four dimension.
    double getX() const;
    double getY() const;
    double getZ() const;
    double getW() const;
    int getDimension() const;

    friend ostream &operator<<(ostream &out, const Point &p);
};

#endif

