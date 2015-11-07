//
//  Matrix.cpp
//  2015_3811_A1_200745537
//
//  Created by Abdulaziz Jamal on 09/10/15.
//  Copyright © 2015 Abdulaziz Jamal. All rights reserved.
//

#include "Matrix.h"
#include <iomanip>
using namespace std;

Matrix::Matrix()
{
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            c[i][j] = 0;
        }
    }
}

// Construct the 4x4 matrix.
Matrix::Matrix(double r11, double r12, double r13, double r14,
           double r21, double r22, double r23, double r24,
           double r31, double r32, double r33, double r34,
           double r41, double r42, double r43, double r44)
{
    c[0][0] = r11; c[0][1] = r12; c[0][2] = r13; c[0][3] = r14;
    c[1][0] = r21; c[1][1] = r22; c[1][2] = r23; c[1][3] = r24;
    c[2][0] = r31; c[2][1] = r32; c[2][2] = r33; c[2][3] = r34;
    c[3][0] = r41; c[3][1] = r42; c[3][2] = r43; c[3][3] = r44;
}


Matrix operator*(const Matrix &l, const Matrix &r)
{
    // Calculate v = l * r.
    Matrix v;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 4; k++) {
                v.c[i][j] += l.c[i][k] * r.c[k][j];
            }
        }
    }
    return v;
}

// Matrix * Vector.
Vector operator*(const Matrix &l, const Vector &r)
{
    // calculate v = l * r
    double v[4];
    for (int i = 0; i < 4; i++) {
        v[i] = l.c[i][0] * r.getX() +
               l.c[i][1] * r.getY() +
               l.c[i][2] * r.getZ() +
               l.c[i][3] * r.getW();
    }
    return Vector(v[0], v[1], v[2]);
}

// Matrix * Point.
Point operator*(const Matrix &l, const Point  &r)
{
    // Calculate v = l * r.
    double v[4];
    for (int i = 0; i < 4; i++) {
        v[i] = l.c[i][0] * r.getX() +
               l.c[i][1] * r.getY() +
               l.c[i][2] * r.getZ() +
               l.c[i][3] * r.getW();
    }
    return Point(v[0], v[1], v[2]);
}


ostream &operator<<(ostream &out, const Matrix &m)
{
    for (int i = 0; i < 4; i++) {
        out << "[";
        for (int j = 0; j < 4; j++) {
            if (j > 0) out << " ";
            out << setw(4) << setprecision(2) << left << m.c[i][j];
        }
        out << "]" << endl;
    }
    return out;
}
