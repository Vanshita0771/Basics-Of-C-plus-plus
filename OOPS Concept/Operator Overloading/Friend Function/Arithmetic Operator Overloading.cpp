//Operator overloading using friend function
#include<iostream>
using namespace std;
class Box{
	int length;
	int width;
	int height;
	public:
   //Default Constructor
    Box(){
    	
	}
    //Parametrised Constructor
	Box(int a){
		length=width=height=a;
	}
    Box(int l,int w,int h):length(l),width(w),height(h){
    	
	}
	void display(){
		cout<<"Length:"<<length<<endl<<"Height:"<<height<<endl<<"Width:"<<width<<endl;
	}
  friend Box operator+(Box b1,Box b2);
};
 //Addition operator overloading 
	Box operator+(Box b1,Box b2){
		Box temp;
		temp.length=b2.length+b1.length;
		temp.height=b2.height+b1.height;
		temp.width=b2.width+b1.width;
		return temp;
	}  
int main()
{  
    Box b1(9);
    Box b2(1,2,3);
    Box b3=b1+b2;
    b3.display();
   return 0;
}
