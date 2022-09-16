
/*A C++ virtual function is a member function in the base class that you redefine in a derived class. It is declared using the virtual keyword.
It is used to tell the compiler to perform dynamic linkage or late binding on the function.*/
#include<iostream>
using namespace std;

class Base{
	public:
      virtual void show()
		 {
		 	cout<<"\n Inside Base Show()"<<endl;
		  }
};

class Derived:public Base{
	public:
     void show(){
		 	cout<<"\n Inside Derived Show()"<<endl;
		 }
	 
};
int main()
{
	Base bObj;
	Derived dObj;
	Base *bObjp=&dObj;
  //	Derived *dObjp=&bObj; Invalid Conversion --Derived class pointer can't refer to base class
	bObjp->show();//call to derived class function show
	return 0;
}
