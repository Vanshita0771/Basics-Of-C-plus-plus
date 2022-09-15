/*Multipath Inheritance:A derived class with two base classes and these two base classes have one common base class is called multipath inheritance.
Ambiguity can arise in this type of inheritance.
Both ClassB and ClassC inherit ClassA, they both have a single copy of ClassA. However Class-D inherits both ClassB and ClassC, 
therefore Class-D has two copies of ClassA, one from ClassB and another from ClassC. */
#include <iostream>
using namespace std;
class A{
    public:
     A(){
        cout<<"I am in constructor A"<<endl;  
     }
};
class B:public A{
    public:
     B(){
         cout<<"I am in constructor B"<<endl;
     }
};
class C:public A{
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
