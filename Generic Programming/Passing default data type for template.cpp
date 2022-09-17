#include <iostream>
using namespace std;
template <class T,class U=float> U add(T a,U b){
    return a+b;
}
int main()
{
    int a=2;
    float b=8.7;
    cout<<"Addition:"<<add<int>(a,1.3)<<endl;
    cout<<"Addition:"<<add<int,char>(a,'A')<<endl;
    return 0;
}
