/*Early Binding (compile-time time polymorphism) As the name indicates, compiler (or linker) directly associate an address to the function call.
It replaces the call with a machine language instruction that tells the mainframe to leap to the address of the function.*/
#include<iostream>
using namespace std;

class Base{
	public:
		 void display(){
		 	cout<<"\n Inside Base Display()"<<endl;
		 }
};

class Derived:public Base{
	public:
		 void display(){
		 	cout<<"\n Inside Derived Display()"<<endl;
		 }
};
int main()
{
	Base bObj;
	Derived dObj;
	Base *bObjp=&dObj;
  //	Derived *dObjp=&bObj; Invalid Conversion --Derived class pointer can't refer to base class
	bObjp->display();//call to base class function display
     
	return 0;
}
