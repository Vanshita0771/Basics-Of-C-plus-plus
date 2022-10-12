
#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b;
    cout<<"Bitwise And:"<<(a&b)<<endl;
    cout<<"Bitwise Or:"<<(a|b)<<endl;
    cout<<"Bitwise XOr:"<<(a^b)<<endl;
    cout<<"Left shift:"<<(a<<2)<<endl;
    cout<<"Right shift:"<<(a>>2)<<endl;
    cout<<"Bitwise Not:"<<(~a)<<endl;
    
    return 0;
}
