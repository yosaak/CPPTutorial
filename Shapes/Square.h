//Practice with inheritance, polymorphism, and Abstract Data Types
//declaration file for mySquare class

#ifndef MYSQUARE_H
#define MYSQUARE_H

#include "Rect.cpp"

class mySquare : public myRectangle
{
    public:
        //constructors
        mySquare();
        //explicity call the myRectangle constructor within this implementation to pass w as width and height
        mySquare(const float w);

        //destructor
        ~mySquare();
};

#endif
