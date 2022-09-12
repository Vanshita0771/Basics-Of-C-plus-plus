//A constructor is a special type of member function that is called automatically when an object is created.
//In C++, a constructor has the same name as that of the class and it does not have a return type.
#include<iostream>
using namespace std;
class Box{
	public:
	int length;
	int width;
	int height;

	//Parametrised constructor--Parameters are passed.When the parameterized constructor is defined and no default constructor is defined explicitly,
       //the compiler will not implicitly call the default constructor 
	Box(int l,int h,int w):length(l),height(h),width(w){
	}
};
        
int main()
{  
    int length,width,height;
    cout<<"Enter the length:";
		cin>>length;
		cout<<"Enter the width:";
		cin>>width;
		cout<<"Enter the height:";
		cin>>height;
    Box b1(length,width,height);
    cout<<"Height of box b1:"<<b1.height<<endl;
    cout<<"Length of box b1:"<<b1.length<<endl;
    cout<<"Width of box b1:"<<b1.width<<endl;
    return 0;
}
