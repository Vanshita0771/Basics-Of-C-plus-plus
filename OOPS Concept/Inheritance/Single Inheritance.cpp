//Single Inheritance: In single inheritance, a class is allowed to inherit from only one class. i.e. one subclass is inherited by one base class only.
#include<iostream>
using namespace std;

//A is the super class or parent class.B is the child class which inherits members of A class.
class A{
	protected:
		int c;
	public:
		int a;
		void setvalues(int x,int y){
			a=x;
			c=y;
		}
	    void displayvalues(){
	    	cout<<"a:"<<a<<" "<<"c:"<<c<<" ";
		}
};
//B inherits the data members publicly.Means z will be protected member and y will be public member of subclass B
class B:public A{
    	int c;
    	public:
    		void setValues(int x,int y,int z){
    			setvalues(x,y);
    			c=z;
			}
			void displayValues(){
				displayvalues();
				cout<<"c:"<<c<<endl;
			}
};
int main(){
	B b1;
	b1.setValues(1,2,3);
	b1.displayValues();
	return 0;
}
