//Practice with inheritance, polymorphism, and Abstract Data Types
//implementaion file for the myRectangle class

//get a vauge compiler/linker error if you have virtual methods that aren't implemented (even if it ends up being just
//  a 'stub' method, aka empty, like the destructor)

#include "Rect.h"

myRectangle::myRectangle()
{
    setWidth(10);
    setHeight(10);
}

myRectangle::myRectangle(const float & w, const float & h)
{
    setWidth(w);
    setHeight(h);
}

myRectangle::~myRectangle()
{
}

float myRectangle::area()
{
    return getWidth() * getHeight();
}