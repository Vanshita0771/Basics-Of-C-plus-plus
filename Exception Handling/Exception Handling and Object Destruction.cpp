// C++ Program to show what really happens
// when an exception is thrown from
// a constructor
#include <iostream>
using namespace std;

class Test1 {
public:
	// Constructor of the class
	Test1()
	{
		cout << "Constructing an Object of class Test1"	<< endl;
	}
	// Destructor of the class
	~Test1()
	{
		cout << "Destructing an Object the class Test1"<< endl;
	}
};

class Test2 {
public:
	// Following constructor throws
	// an integer exception
	Test2() // Constructor of the class
	{
		cout << "Constructing an Object of class Test2"<< endl;
		throw 20;
	}
	// Destructor of the class
	~Test2()
	{
		cout << "Destructing the Object of class Test2"<< endl;
	}
};

int main()
{
	try {
		// Constructed and destructed
		Test1 t1;

		// Partially constructed
		Test2 t2;

		// t3 is not constructed as
		// this statement never gets executed
		Test1 t3; // t3 is not called as t2 is
				// throwing/returning 'int' argument which
				// is not accepeted
				// is the class test1'
	}
	catch (int i) {
		cout << "Caught " << i << endl;
	}
}
