//
//  main.cpp
//  2015_3811_A1_200745537
//
//  Created by Abdulaziz Jamal on 09/10/15.
//  Copyright © 2015 Abdulaziz Jamal. All rights reserved.
//

#include "Point.h"
#include "Vector.h"
#include "Matrix.h"
#include <iostream>
#include <iomanip>
using namespace std;


// Points and Vector for 2D.
Point A(0, 2), B(2, 0), C(4, 7), D(3, 1), E(0, 0), F(2, 3);
// Points and Vector for 3D.
Vector P(1, 3, 2), Q(4, 1, 4), R(-1, -1, -1); 
Vector u(P, Q), v(Q, R), w(R, P);
// Matrix.
Matrix M1(1, 0, 0, 0, 
          0, 0.6, 0.8, 0,
          0, -0.8, 0.6, 0,
          0, 0, 0, 1),
       M3(1, 0, 0, 1,
          0, 1, 0, -2,
          0, 0, 1, 3,
          0, 0, 0, 1),
       M2(1, 0, 0, 0,
          0, 0.6, -0.8, 0,
          0, 0.8, 0.6, 0,
          0, 0, 0, 1);

void taskA();
void taskB();
void taskC();

int main()
{
    taskA();
    taskB();
    taskC();
}


void taskA()
{
    cout << "\n" << endl;
    cout << "<Part A: Points and Vectors in 2D.>" << endl;
    cout << "\n" << endl;
    // Calculate perpendicular vector of AB, BC, CA.
    Vector AB(A, B), BC(B, C), CA(C, A);
    Vector pAB = AB.perpendicular();
    Vector pBC = BC.perpendicular();
    Vector pCA = CA.perpendicular();
    // Display Norm Form.
    cout << "Normal Form" << endl;
    cout << "\n" << endl;
    cout << "Line AB: " << pAB << " dot p = " << pAB.dot(A) << endl;
    cout << "Line BC: " << pBC << " dot p = " << pBC.dot(B) << endl;
    cout << "Line CA: " << pCA << " dot p = " << pCA.dot(C) << endl;
    cout << "\n" << endl;
    // Display Parameter Form.
    cout << "Parameter Form" << endl;
    cout << "\n" << endl;
    cout << "Line AB: " << "l = " << A << " + " << AB << " * t" << endl;
    cout << "Line BC: " << "l = " << B << " + " << BC << " * t" << endl;
    cout << "Line CA: " << "l = " << C << " + " << CA << " * t" << endl;
    double npc;
    npc = pAB.dot(D) -  pAB.dot(A);
    if (npc > 0) {
        cout << "D is on the right of line AB" << endl;
    } else if (npc == 0) {
        cout << "D is on the line AB" << endl;
    } else {
        cout << "D is on the  left of line AB" << endl;
    }

    npc = pAB.dot(E) -  pAB.dot(A);
    if (npc > 0) {
        cout << "E is on the right of line AB" << endl;
    } else if (npc == 0) {
        cout << "E is on the line AB" << endl;
    } else {
        cout << "E is on the  left of line AB" << endl;
    }
    npc = pAB.dot(F) -  pAB.dot(A);
    if (npc > 0) {
        cout << "F is on the right of line AB" << endl;
    } else if (npc == 0) {
        cout << "F is on the line AB" << endl;
    } else {
        cout << "F is on the  left of line AB" << endl;
    }

    npc = pBC.dot(D) -  pBC.dot(B);
    if (npc > 0) {
        cout << "D is on the right of line BC" << endl;
    } else if (npc == 0) {
        cout << "D is on the line BC" << endl;
    } else {
        cout << "D is on the  left of line BC" << endl;
    }

    npc = pBC.dot(E) -  pBC.dot(B);
    if (npc > 0) {
        cout << "E is on the right of line BC" << endl;
    } else if (npc == 0) {
        cout << "E is on the line BC" << endl;
    } else {
        cout << "E is on the  left of line BC" << endl;
    }

    npc = pBC.dot(F) -  pBC.dot(B);
    if (npc > 0) {
        cout << "F is on the right of line BC" << endl;
    } else if (npc == 0) {
        cout << "F is on the line BC" << endl;
    } else {
        cout << "F is on the  left of line BC" << endl;
    }

    npc = pCA.dot(D) -  pCA.dot(C);
    if (npc > 0) {
        cout << "D is on the right of line CA" << endl;
    } else if (npc == 0) {
        cout << "D is on the line CA" << endl;
    } else {
        cout << "D is on the  left of line CA" << endl;
    }

    npc = pCA.dot(E) -  pCA.dot(C);
    if (npc > 0) {
        cout << "E is on the right of line CA" << endl;
    } else if (npc == 0) {
        cout << "E is on the line CA" << endl;
    } else {
        cout << "E is on the  left of line CA" << endl;
    }
    npc = pCA.dot(F) -  pCA.dot(C);
    if (npc > 0) {
        cout << "F is on the right of line CA" << endl;
    } else if (npc == 0) {
        cout << "F is on the line CA" << endl;
    } else {
        cout << "F is on the  left of line CA" << endl;
    }
    cout << endl;
}

void taskB()
{
    cout << "<Part B: Points and Vectors in 3D.>" << endl;
    cout << "\n" << endl;
    // Results for vectors u,v and w.
    cout << "u = " << u << endl;
    cout << "v = " << v << endl;
    cout << "w = " << w << endl;
    cout << "\n" << endl;
    // Computing Dot products.
    cout << "u.v = " << u.dot(v) << endl
         << "u.w = " << u.dot(w) << endl
         << "v.w = " << v.dot(w) << endl;
    cout << "\n" << endl;  
    // Computing Angle Theta between pair of vectors.   
    cout << "angle(u, v) = " << angle(u, v) << endl
         << "angle(u, w) = " << angle(u, w) << endl
         << "angle(v, w) = " << angle(v, w) << endl;
    Vector uv = u * v, uw = u * w, vu = v * u,
           vw = v * w, wu = w * u, wv = w * v;
    cout << "\n" << endl;     
    // Computing Cross Products.  
    cout << "u*v = " << uv << endl; 
    cout << "u*w = " << uw << endl;
    cout << "v*u = " << vu << endl;
    cout << "v*w = " << vw << endl;
    cout << "w*u = " << wu << endl;
    cout << "w*v = " << wv << endl;
    cout << endl;
}

void taskC()
{
    cout << "<Part C: Matrices>" << endl;
    cout << "\n" << endl;
    // Computing matrix products.
    cout << "M1 * M2 = " << endl << M1 * M2 << endl;
    cout << "M2 * M1 = " << endl << M2 * M1 << endl;
    cout << "M1 * M3 = " << endl << M1 * M3 << endl;
    cout << "\n" << endl;
    // Computing matrix-vector products.
    cout << "M1 * u = " << M1 * u << endl;
    cout << "M2 * v = " << M2 * v << endl;
    cout << "M3 * w = " << M3 * w << endl;
    cout << "\n" << endl;

    // Computing matrix-point products.
    cout << "M1 * A = " << M1 * A << endl;
    cout << "M2 * B = " << M2 * B << endl;
    cout << "M1* M2 * M3 * A = " << M1 * M2 * M3* A << endl;
    cout << "\n" << endl;

}

