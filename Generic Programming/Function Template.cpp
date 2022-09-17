//Template is simple yet powerful tool in C++.The simple idea is to pass data type as a parameter so that the function can be used for different data types.
#include <iostream>
using namespace std;
//declaration of template
template<class T>
T addition(T a,T b){
    return a+b;
}
int main()
{
    cout<<"Sum of 2 integer values:"<<addition<int>(2,4)<<endl;//call for int data-type
    cout<<"Sum of 2 double values:"<<addition<double>(2.3,4.44)<<endl;//call for double data-type
    cout<<"Sum of 2 float values:"<<addition<float>(2.39,4.44)<<endl;//call for float data-type
    return 0;
}
