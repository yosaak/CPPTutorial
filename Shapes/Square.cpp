//Practice with inheritance, polymorphism, and Abstract Data Types
//implementation file for mySquare class

#include "Square.h"

mySquare::mySquare()
{
    setWidth(10);
    setHeight(10);
}

mySquare::mySquare(const float w)
{
    myRectangle::myRectangle(w, w);
}

mySquare::~mySquare()
{
}
