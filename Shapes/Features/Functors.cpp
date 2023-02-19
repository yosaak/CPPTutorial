// A C++ program uses transform() in STL to add
// 1 to all elements of arr[]
//#include <bits/stdc++.h>
#if 0
#include <iostream>
#include <algorithm> //for transform
using namespace std;

int increment(int x) { return (x+1); }

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr)/sizeof(arr[0]);

	// Apply increment to all elements of
	// arr[] and store the modified elements
	// back in arr[]
	transform(arr, arr+n, arr, increment);

	for (int i=0; i<n; i++)
		cout << arr[i] <<" ";

	return 0;
}
#endif

#if 1
//my example, square of a number
//can this and template fold be used together?

#include<iostream>
#include<algorithm>
using namespace std;

template <typename T>
T square(T t){ return t*t; }

#if 0
template <typename... T>
void print(T... t){ cout << (t);} //This throws this error 'parameter packs not expanded with '...'
void print(T... t){ cout << (t...);} //This texpects binary operator before ')' token
#endif

#if 0
template <typename... T>
void print(T... t){ cout << (...+t);} //this and print(arrI)  in main,simply prints only the array address
goto L1; //goto's have scope.:)
#endif

//goto L2; Labels cannot be global?
#if 1
template <typename... T>
void print(T... t){ cout << (...+t);}

#endif
//L2: Labels cannot be global?
int main()
{
    int arrI[]={1,2,3,4,5};
    float arrF[]={1.1,2.2,3.3,4.4,5.5};
    //cout << transform(arr, arr+4, arr, square) << endl; //this prints the address of arr+0, use range or an iterator to print the values in the arr
    transform(arrI, arrI+4, arrI, square<int>); //To use transform explicitly mention the type of variable
    transform(arrF, arrF+4, arrF, square<float>);
 #if 0   
    //use range to print the value in the array
    //Range was introducted in cpp11
    for(int i:arrI)
    {
        cout << i<< endl;
    }
    cout << endl;
#endif
    //use array to print the value in the array
    //use template fold to pass in values of different data types
L1:
    print(arrI);
    //what is a functor //what is a function pointer
}

#endif
#if 0
Template fold and this look alike
#endif
