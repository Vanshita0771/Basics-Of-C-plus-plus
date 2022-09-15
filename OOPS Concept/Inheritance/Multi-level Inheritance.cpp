//Multilevel Inheritance: In this type of inheritance, a derived class is created from another derived class.
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
    public:
        B(){
    	   cout<<"Constructor of B class called"<<endl;
    	 }
	protected:
		int b;
	    void set_B(int x,int y){
	        set_A(x);
			b=y;
		}
	    void display_B(){
	        display_A();
	    	cout<<"b:"<<b<<" ";
		}
};
//C sub_class derived from class B
class C:public B{
    	int c;
    	public:
    	   C(){
    	       cout<<"Constructor of C class called"<<endl;
    	   }
    		void set_C(int x,int y,int z){
    			set_B(x,y);
    			c=z;
			}
			void display_C(){
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
