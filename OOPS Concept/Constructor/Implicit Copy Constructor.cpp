/*A copy constructor is a member function that initializes an object using another object of the same class.
Whenever we define one or more non-default constructors( with parameters ) for a class, a default constructor( without parameters ) should also be explicitly defined as 
the compiler will not provide a default constructor in this case. However, it is not necessary but it’s considered to be the best practice to always define a default 
constructor. Copy constructor takes a reference to an object of the same class as an argument.
*/
#include<iostream>
using namespace std;
class Box{
	public:
	int length;
	int width;
	int height;
  Box(int l,int h,int w):length(l),height(h),width(w){
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
