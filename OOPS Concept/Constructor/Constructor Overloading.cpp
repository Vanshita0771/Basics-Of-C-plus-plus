/*Constructor Overloading-We can have more than one constructor in a class with same name, as long as each has a different list of arguments.
  This concept is known as Constructor Overloading and is quite similar to function overloading. 
  Overloaded constructors essentially have the same name (exact name of the class) and differ by number and type of arguments.
  A constructor is called depending upon the number and type of arguments passed.
  While creating the object, arguments must be passed to let compiler know, which constructor needs to be called. 
*/
#include<iostream>
using namespace std;
class Box{
	public:
	int length;
	int width;
	int height;
  //Default constructor
  Box(){
    length=width=height=0;
  }
  //Parameterised constructor
  Box(int l,int h,int w):length(l),height(h),width(w){
 	}
  Box(int a):length(a),height(a),width(a){
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
  
    Box b3(9);
    cout<<"Height of box b3:"<<b3.height<<endl;
    cout<<"Length of box b3:"<<b3.length<<endl;
    cout<<"Width of box b3:"<<b3.width<<endl;
   return 0;
}
