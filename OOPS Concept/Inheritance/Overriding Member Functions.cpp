/*Overriding Member Functions--When the member function of base class is overriden by the member function of child class.Condition should be that member function 
of base and child class should have same name,same number of parameters and same return type */
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
