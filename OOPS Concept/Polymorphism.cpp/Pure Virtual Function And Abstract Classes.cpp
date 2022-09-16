/*Abstract classes contains atleast one pure virtual function.This virtual function has implementation in its derived class.Abstract 
classes cannot have objects.Pure virtual function is also called abstract function. A pure virtual function is declared by assigning
0 in declaration.We can have pointers and references of abstract class type. If we do not override the pure virtual function in derived class,
then derived class also becomes abstract class. An abstract class can have constructors. 
*/
#include <iostream>

using namespace std;
class Base{
    public:
    Base(){
        cout<<"I am in base class"<<endl;
    }
    virtual void display()=0;
};
class Derived:public Base{
    public:
    Derived(){
        cout<<"I am in derived class"<<endl;
    }
    void display(){
        cout<<"Display() in derived class"<<endl;
    }
};

int main()
{
    Base* b=new Derived();
    b->display();
    return 0;
}
