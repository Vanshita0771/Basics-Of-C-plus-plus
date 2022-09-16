/*Virtual base classes are used in virtual inheritance in a way of preventing multiple “instances” of a given class appearing in an inheritance hierarchy when
using multiple inheritances.*/
#include <iostream>
using namespace std;
class A{
    public:
     A(){
        cout<<"I am in constructor A"<<endl;  
     }
};
class B:public virtual A{
    public:
     B(){
         cout<<"I am in constructor B"<<endl;
     }
};
class C:public virtual A{
    public:
     C(){
         cout<<"I am in constructor C"<<endl;
     }
};
class D:public B,public C{
    public:
     D(){
         cout<<"I am in constructor D"<<endl;
     }
};
int main()
{
   
   D d1;
    return 0;
}
