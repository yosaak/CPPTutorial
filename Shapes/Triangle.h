//Practice with inheritance, polymorphism, and Abstract Data Types
//declaration file for myTriangle class

#ifndef MYTRIANGLE_H
#define MYTRIANGLE_H

#include "Poly.h"

//imagine the triangle is a right triangle with a width and a height
//  |\
//  | \
//  |  \
//  |___\

class myTriangle : public myPoly
{
    public:
        //constructors
        myTriangle();
        myTriangle(const float & w, const float & h);

        //destructor
        ~myTriangle();

        //since nothing derives from this class it doesn't need to be virtual and in turn neither does the destructor
        float area();
};

#endif
