//Practice with inheritance, polymorphism, and Abstract Data Types
//implementation file for myTriangle class

#include "Triangle.h"

myTriangle::myTriangle()
{
    setWidth(10);
    setHeight(10);
}

myTriangle::myTriangle(const float & w, const float & h)
{
    setWidth(w);
    setHeight(h);
}

myTriangle::~myTriangle()
{
}

float myTriangle::area()
{
    return getWidth() * getHeight() / 2;
}
