//To access the overridden function of the base class, we use the scope resolution operator ::
#include <iostream>
using namespace std;
class A{
    public:
      void display(){
     	cout<<"In A class"<<endl;
	 }
};
class B:public A{
    public:
     void display(){
     	cout<<"In B class"<<endl;
	 }
};
int main()
{
    B* b1=new B();
    b1->A::display();
    return 0;
}
