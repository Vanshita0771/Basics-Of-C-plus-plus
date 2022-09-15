//Hybrid Inheritance is implemented by combining more than one type of inheritance. For example: Combining Hierarchical inheritance and Multiple Inheritance. 
#include<iostream>
using namespace std;
//A is super class
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
//D is super class
class D{
    public:
      D(){
    	  cout<<"Constructor of D class called"<<endl;
      }
	  protected:
	    int d;
		  void set_D(int w){
			 d=w;
		  }
	    void display_D(){
	    	cout<<"d:"<<d<<" ";
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
// C sub_class derived from class A,D
class C:public A,public D{
    	int c;
    	public:
    	   C(){
    	       cout<<"Constructor of C class called"<<endl;
    	   }
    		void set_C(int x,int z,int w){
    		    set_A(x);
    		    set_D(w);
    			  c=z;
		   	}
	  		void display_C(){
				  display_A();
				  display_D();
				  cout<<"c:"<<c<<endl;
		  	}
};
int main(){
	C c1;
	c1.set_C(1,2,6);
	c1.display_C();
	B b1;
	b1.set_B(1,3);
	b1.display_B();
	return 0;
}
