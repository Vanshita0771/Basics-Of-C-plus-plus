//A constructor is a special type of member function that is called automatically when an object is created.
//In C++, a constructor has the same name as that of the class and it does not have a return type.
#include<iostream>
using namespace std;
class Box{
	public:
	int length;
	int width;
	int height;
	public:
	//Default constructor--No parameters  are passed
	Box(){
		cout<<"Enter the length:";
		cin>>length;
		cout<<"Enter the width:";
		cin>>width;
		cout<<"Enter the height:";
		cin>>height;
	}
};
        
int main()
{  
    Box b1;
    cout<<"Height of box b1:"<<b1.height<<endl;
    cout<<"Length of box b1:"<<b1.length<<endl;
    cout<<"Width of box b1:"<<b1.width<<endl;
    return 0;
}
