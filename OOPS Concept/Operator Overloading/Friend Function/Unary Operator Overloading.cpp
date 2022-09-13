//Unary Operator Overload-->Postfix and Prefix Increment
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
	  //prefix operator overload
    friend Box operator++(Box b);
   	//postfix operator overload
    friend Box operator++(Box b,int a);
};
 Box operator++(Box b,int a){
   	 (b.length)++;
   	 (b.width)++;
   	 (b.height)++;
      return b;
   }
 Box operator++(Box b){
   	 ++(b.length);
   	 ++(b.width);
   	 ++(b.height);
      return b;
   }
int main()
{  
   
    Box b1(1,2,3);
    b1++;
    b1.display();
    ++b1;
    b1.display();
   return 0;
}
