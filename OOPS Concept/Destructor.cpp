/*Destructor is an instance member function which is invoked automatically whenever an object is going to be destroyed.
  Meaning, a destructor is the last function that is going to be called before an object is destroyed.*/
#include<iostream>
using namespace std;
class Box{
	public:
	int length;
	int width;
	int height;
  //Parametrised Constructor
	Box(int a){
		length=width=height=a;
	}
  //Destructor
   ~Box(){
    	cout<<"Box object is destroyed"<<endl;
	}
};
        
int main()
{  
    Box b3(9);
    cout<<"Height of box b3:"<<b3.height<<endl;
    cout<<"Length of box b3:"<<b3.length<<endl;
    cout<<"Width of box b3:"<<b3.width<<endl;
   return 0;
}
