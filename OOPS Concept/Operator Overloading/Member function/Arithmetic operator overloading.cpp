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
  //Addition operator overloading 
	Box operator+(Box b1){
		Box temp;
		temp.length=this->length+b1.length;
		temp.height=this->height+b1.height;
		temp.width=this->width+b1.width;
		return temp;
	}
};
    
int main()
{  
    Box b1(9);
    Box b2(1,2,3);
    Box b3=b1+b2;
    b3.display();
   return 0;
}
