#if 0
#include <iostream>

template <typename... T, typename... U>
auto sum(T... t, U...u)
{
    std::cout<< ... <<< args<<std::endl;
    return (t...)+(u...);
}

int main()
{
    std::cout<<sum(1,2.3,3,4,5,6,7,8,9)<<std::endl;
}
#endif

#if 1
#include <iostream>

template <typename... T>
auto sum(T... t)
{
    //std::cout<<  t...<<std::endl; //With this line variadic parameter throws error but still prints output. How?
    return (t+...);
}

int main()
{
    std::cout<<sum(1,(int)2.3,3,4,5,6,7,8,9)<<std::endl;
}
#endif

#if 0
//what does main return with no proper output definition

//undefined reference to `main'

int main(void) {
    ...; //what's this, what is runexp.
    return 0;
}

A fold expression is an instruction for the compiler to repeat the application of an operator over a variadic template pack.
c++ unary right fold vs left fold

#endif
#if 0
//what is a fold expression

#include <iostream>
template<typename ... T>
auto average(T ... t) {
    return (t + ... ) / sizeof...(t);
}
int main() {
    std::cout << average(1, 2, 3, 4, 5, 6, 7, 8, 9, 10) << std::endl;
}

#endif