//Multiple Inheritance: Multiple Inheritance is a feature of C++ where a class can inherit from more than one class. i.e one subclass is inherited from more than one base class.
#include<iostream>
using namespace std;

//A is the super class 
class A{
	protected:
	    int a;
		void set_A(int x){
			a=x;
		}
	    void display_A(){
	    	cout<<"a:"<<a<<" ";
		}
};
//B is the super class 
class B{
	protected:
		int b;
	    void set_B(int y){
			b=y;
		}
	    void display_B(){
	    	cout<<"b:"<<b<<" ";
		}
};
//C inherits the data members publicly from A and B
class C:public A,public B{
    	int c;
    	public:
    		void set_C(int x,int y,int z){
    			set_A(x);
    			set_B(y);
    			c=z;
			}
			void display_C(){
				display_A();
				display_B();
				cout<<"c:"<<c<<endl;
			}
};
int main(){
	C c1;
	c1.set_C(1,2,3);
	c1.display_C();
	return 0;
}
