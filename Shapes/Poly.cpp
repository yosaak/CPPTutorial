//Practice with inheritance, polymorphism, and Abstract Data Types
//implementation file for myPoly class

#include "Poly.h"

//constructor
myPoly::myPoly()
{
    setWidth(10);
    setHeight(10);
}

myPoly::myPoly(const float & w, const float & h)
{
    setWidth(w);
    setHeight(h);
}

//destructor
myPoly::~myPoly() {}

//accessors
float myPoly::getWidth() {return width;}
float myPoly::getHeight() {return height;}

void myPoly::setHeight(const float & w) {width = w;}
void myPoly::setWidth(const float & h) {height = h;}

//pure virtual functions have no implementation
//area() is handled in the header file
