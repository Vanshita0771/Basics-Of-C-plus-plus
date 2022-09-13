//Private Destructor---Destructor with access specifier as private
#include<iostream>
using namespace std;
class Box{
	//Private Destructor
	~Box(){
    	cout<<"Box object is destroyed"<<endl;
	}
	public:
	int length;
	int width;
	int height;
  //Parametrised Constructor
	Box(int a){
		length=width=height=a;
	}
  //Friend function---Object can access the private members of the class
   friend void destructor(Box* b);
};
    void destructor(Box* b){
     	delete b;
	}   
int main()
{  
    Box* b3=new Box(9);
    cout<<"Height of box b3:"<<b3->height<<endl;
    cout<<"Length of box b3:"<<b3->length<<endl;
    cout<<"Width of box b3:"<<b3->width<<endl;
    destructor(b3);
   return 0;
}
