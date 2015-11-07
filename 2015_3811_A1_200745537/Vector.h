#ifndef VECTOR_H
#define VECTOR_H

#include "Point.h"

// Vector is essentially a point.
class Vector : public Point
{
public:
    // Construct the vector with the four dimension data.
    Vector(double x, double y, double z);
    Vector(double x, double y);
    Vector(const Point &l, const Point &r);

    // Return the perpendicular vector in 2D.
    Vector perpendicular();

    // Dot product.
    double dot(const Point &p) const;

    // Cross product.
    friend Vector operator*(const Vector &l, const Vector &r);

    // Normaize the vector.
    Vector normalize() const;

    double distance() const;

    // Calculate the angle of two vectors.
    friend double angle(const Vector &l, const Vector &r);
};


#endif

