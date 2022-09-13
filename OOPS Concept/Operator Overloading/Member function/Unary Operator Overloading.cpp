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
    void operator++(){
   	 length++;
   	 width++;
   	 height++;
   }
   	//postfix operator overload
    void operator++(int a){
   	 length++;
   	 width++;
   	 height++;
   }
};

int main()
{  
   
    Box b1(1,2,3);
    b1++;
    b1.display();
    ++b1;
    b1.display();
   return 0;
}
