//
//  Vector.cpp
//  2015_3811_A1_200745537
//
//  Created by Abdulaziz Jamal on 09/10/15.
//  Copyright © 2015 Abdulaziz Jamal. All rights reserved.
//

#include "Vector.h"
#include <cmath>
using namespace std;

// Construct the vector with the four dimension data.
Vector::Vector(double x, double y, double z)
    : Point(x, y, z)
{
}

Vector::Vector(double x, double y)
    : Point(x, y)
{
}

Vector::Vector(const Point &l, const Point &r)
    : Point(r.getX() - l.getX(), r.getY() - l.getY(), r.getZ() - l.getZ())
{
    dimension = l.getDimension();
}

// Return the perpendicular vector in 2D.
Vector Vector::perpendicular()
{
    return Vector(-getY(), getX()).normalize();
}

Vector Vector::normalize() const
{
    if (getX() == 0 && getY() == 0 && getZ() == 0) {
        return *this;
    }
    double s = distance();
    double x = getX() / s;
    double y = getY() / s;
    double z = getZ() / s;
    if (x < 0) {
        x = -x;
        y = -y;
        z = -y;
    }
    if (dimension == 2) {
        return Vector(x, y);
    } else {
        return Vector(x, y, z);
    }
}

double Vector::distance() const
{
    return sqrt(getX() * getX() + getY() * getY() + getZ() * getZ());
}

// Calculate the dot product of two vectors.
double Vector::dot(const Point &p) const
{
    return getX() * p.getX() +
           getY() * p.getY() +
           getZ() * p.getZ();
}


// Calculate the angle of two vectors.
double angle(const Vector &l, const Vector &r)
{
    double dl = l.distance();
    double dr = r.distance();
    double cos = l.dot(r);
    return acos(cos / dl / dr) / M_PI * 180;
}

// Calcualte the cross products of two vectors.
Vector operator*(const Vector &l, const Vector &r)
{
    double x = l.getY() * r.getZ() - l.getZ() * r.getY();
    double y = l.getZ() * r.getX() - l.getX() * r.getZ();
    double z = l.getX() * r.getY() - l.getY() * r.getX();
    return Vector(x, y, z);
}
