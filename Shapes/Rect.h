//Practice with inheritance, polymorphism, and Abstract Data Types
//declaration file for myRectangle class

#ifndef MYRECTANGLE_H
#define MYRECTANGLE_H

#include "Poly.h"

class myRectangle : public myPoly
{
    public:
        //constructor
        myRectangle();
        myRectangle(const float & w, const float & h);

        //destructor
        ~myRectangle();

        //this doesn't need to be virtual since the derived class doesn't override this method
        float area();
};

#endif
