//Practice with inheritance, polymorphism, and Abstract Data Types
//main class that uses my shape classes and experiments with inheritance, polymorphism, and ADTs

//#include "Rect.cpp"
//#include "mySquare.cpp"
//#include "Triangle.cpp"

#include "Rect.h"
#include "Triangle.h"
#include <iostream>

int main()
{
    myPoly * shape = new myRectangle(20,20);
    (void)shape;
    return 0;
}
