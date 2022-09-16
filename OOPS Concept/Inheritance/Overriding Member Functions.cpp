/*Overriding Member Functions--Suppose, the same function is defined in both the derived class and the base class.
Now if we call this function using the object of the derived class, the function of the derived class is executed. */
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
    b1->display();
    return 0;
}
