//Explicit Copy Constructor
#include<iostream>
using namespace std;
class Box{
	public:
	int length;
	int width;
	int height;
  //Parameterised constructor
  Box(int l,int h,int w):length(l),height(h),width(w){
 	}
  //Explicit copy constructor
  Box(Box &b){
    length=b.length;
    width=b.width;
    height=b.height;
  }
};
        
int main()
{  
   
    Box b1(2,3,4);
    cout<<"Height of box b1:"<<b1.height<<endl;
    cout<<"Length of box b1:"<<b1.length<<endl;
    cout<<"Width of box b1:"<<b1.width<<endl;
    //Assigning the reference of object b1 
    Box b2(b1);//or Box b2=b1;
    
    cout<<"Height of box b2:"<<b2.height<<endl;
    cout<<"Length of box b2:"<<b2.length<<endl;
    cout<<"Width of box b2:"<<b2.width<<endl;
    return 0;
}
