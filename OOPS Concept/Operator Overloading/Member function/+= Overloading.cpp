
#include<iostream>
using namespace std;
class Box{
	int length;
	int width;
	int height;
	public:
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
	void operator+=(Box b1){
		length+=b1.length;
		height+=b1.height;
	    width+=b1.width;
	}
};
int main()
{  
    Box b1(9);
    Box b2(1,2,3);
    b1+=b2;
    b1.display();
   return 0;
}
