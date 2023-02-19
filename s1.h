#include <string>
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
//construct car within a said time, use sockets, where can forward declarations be used,collections,constexpr,many_print,

//#ifdef __cplusplus
//extern "C" {
//#endif
//class Master {
//    Forward *forward_class_ptr; is this allowed

//template<typename X, typename Y, typename Z>
class CtrlPart
{
    public:
    CtrlPart(std::string name);
    int count;
};

class BodyPart
{
//take the latest available goods and use that to construct
//stack
public:
    std::string name;
    BodyPart(std::string name);
};

class ConstructCar: public BodyPart//, public master{}
{
    public:
    ConstructCar(std::string name):BodyPart(std::string name);
    //ConstructCar(std::string name);
};

class Info
{
//tree
//use reference
};

class Car:public CtrlPart,private Info, public BodyPart
{
//can a class with only a parameterized constructor be inherited from. eg, CtrlPart("a")
    Car();//constructor
    
};
