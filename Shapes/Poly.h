//Practice with inheritance, polymorphism, and Abstract Data Types
//header file for Polygon class

#ifndef MYPOLY_H
#define MYPOLY_H

class myPoly
{
    public:
        //constructor
        //const reference pass because the values w and h don't change and reference avoid the time it takes to copy large
        //  objects by value (if there were any)
        myPoly();
        myPoly(const float & w, const float & h);

        //destructor
        virtual ~myPoly();

        //accessors
        float getWidth();
        float getHeight();
        void setWidth(const float & w);
        void setHeight(const float & h);

        virtual float area() = 0;

    private:
        float width, height;
};

#endif
