/*The capability of a class to derive properties and characteristics from another class is called Inheritance. 
Inheritance is one of the most important features of Object-Oriented Programming. 
Modes of inheritance --
1 Public Mode
2 Private Mode
3 Protected Mode*/
#include<iostream>
using namespace std;

//A is the super class or parent class.B,C,D are the child classes which inherits members of A class based on mode of inheritance
class A{
	//x is a private member.So it will not be accessible outside the class
	private:
		int x;
	public:
		int y;
	protected:
		int z;
};
//B inherits the data members publicly.Means z will be protected member and y will be public member of subclass B
class B:public A{
};
//C inherits the data members privately.Means z and y will be private members of subclass B
class C:private A{
};
//C inherits the data members protectedly.Means z and y will be protected members of subclass B
class D:protected A{
};
int main(){
	return 0;
}
