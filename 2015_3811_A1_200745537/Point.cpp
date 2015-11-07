//
//  Point.cpp
//  2015_3811_A1_200745537
//
//  Created by Abdulaziz Jamal on 09/10/15.
//  Copyright © 2015 Abdulaziz Jamal. All rights reserved.
//

#include "Point.h"
#include <iomanip>
using namespace std;

// Construct the Point in 2D or 3D.
Point::Point(double x, double y)
    : x(x), y(y), z(0), w(1), dimension(2)
{
}

Point::Point(double x, double y, double z)
    : x(x), y(y), z(z), w(1), dimension(3)
{
}


Point::Point()
    : x(0), y(0), z(0), w(1), dimension(3)
{
}

// Get the values of four dimension.
double Point::getX() const
{
    return x;
}

double Point::getY() const
{
    return y;
}

double Point::getZ() const
{
    return z;
}

double Point::getW() const
{
    return w;
}

int Point::getDimension() const
{
    return dimension;
}

ostream &operator<<(ostream &out, const Point &p)
{
    out << "[" << p.x << "|" << p.y;
    if (p.dimension == 3) {
        out << "|" << p.z;
    }
    out << "]";
    return out;    
}
