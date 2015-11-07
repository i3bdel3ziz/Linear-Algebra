#ifndef MATRIX_H
#define MATRIX_H

#include "Point.h"
#include "Vector.h"
#include <iostream>
using namespace std;

class Matrix
{
private:
    double c[4][4]; // The element in each cell.

public:
    // Construct matrix with 0 as cells.
    Matrix();
    // Construct the 4x4 matrix.
    Matrix(double r11, double r12, double r13, double r14,
           double r21, double r22, double r23, double r24,
           double r31, double r32, double r33, double r34,
           double r41, double r42, double r43, double r44);

    // Operators 
    
    // Matrix * Matrix
    friend Matrix operator*(const Matrix &l, const Matrix &r);
    // Matrix * Vector
    friend Vector operator*(const Matrix &l, const Vector &r);
    // Matrix * Point
    friend Point  operator*(const Matrix &l, const Point  &r);
    
    friend ostream &operator<<(ostream &out, const Matrix &m);    
};

#endif

