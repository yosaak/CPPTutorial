#include <iostream>
#include <vector>

using namespace std;


//vector of templates. template has many ctrlpart types
//template function
//template classes
//use pointers normal and smart
//just create multiple threads of ctrlpart, use locks to access them
//use lambdas
//use regex
//use functors
//use copy constructor
//use const, different variations,volatile,var
//use virtual constructor and destructor
//unit test everything, delete, delete []
//timer, parallel threads, cpprestsdk
//construct car within a said time, use sockets, where can forward declarations be used,collections

//class Master {
//    Forward *forward_class_ptr; is this allowed

//template<typename X, typename Y, typename Z>
class CtrlPart
{
#if 0
Template<typename X, typename Y, typename Z>
Z constructGrp(X x,Y y)
{
    //use operator overloading
    Z z;
    z = x+y;
    return z;
}
#endif

public:
    CtrlPart(string n);
    int count;
};

class BodyPart
{
//take the latest available goods and use that to construct
//stack
};

class ConstructCar: public BodyPart//, public master{}
{

};

class Info
{
//tree
//use reference
};

class Car:public CtrlPart("a"),private Info, public BodyPart
{
//can a class with only a parameterized constructor be inherited from. eg, CtrlPart("a")
    Car() //constructor
    {
        
    }
    
};

int main()
{
    cout << "making cars";
    return 0;
}