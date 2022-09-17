//We can pass more than one data type as arguments to templates.
#include <iostream>
using namespace std;
template <class T,class U> U add(T a,U b){
    return a+b;
}
int main()
{
    int a=2;
    float b=8.7;
    cout<<"Addition:"<<add<int,float>(a,b)<<endl;

    return 0;
}
