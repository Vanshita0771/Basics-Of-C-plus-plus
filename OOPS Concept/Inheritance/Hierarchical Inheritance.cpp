/*Hierarchical Inheritance: In this type of inheritance, more than one subclass is inherited from a single base class. i.e. more than one derived class is 
created from a single base class.*/
#include<iostream>
using namespace std;

//A is the super class 
class A{
    public:
      A(){
    	  cout<<"Constructor of A class called"<<endl;
     }
	protected:
	    int a;
		void set_A(int x){
			a=x;
		}
	    void display_A(){
	    	cout<<"a:"<<a<<" ";
		}
};
// B sub_class derived from class A
class B:public A{
    int b;
    public:
        B(){
    	   cout<<"Constructor of B class called"<<endl;
    	 }
		
	    void set_B(int x,int y){
	        set_A(x);
			b=y;
		}
	    void display_B(){
	        display_A();
	    	cout<<"b:"<<b<<" ";
		}
};
// C sub_class derived from class A
class C:public A{
    	int c;
    	public:
    	   C(){
    	       cout<<"Constructor of C class called"<<endl;
    	   }
    		void set_C(int x,int z){
    		    set_A(x);
    			c=z;
		   	}
			void display_C(){
				display_A();
				cout<<"c:"<<c<<endl;
			}
};
int main(){
	C c1;
	c1.set_C(1,2);
	c1.display_C();
	B b1;
	b1.set_B(1,3);
	b1.display_B();
	return 0;
}
