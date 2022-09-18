/*If both base and derived classes are caught as exceptions, then the catch block of the derived class must appear before the base class. 
If we put the base class first then the derived class catch block will never be reached. */
#include <iostream>
using namespace std;
class Base{
    
};
class Derived:public Base{
    
};
int main()
{
    try{
      Derived d;
      throw d;
    }
    catch(Derived d){
        cout<<"Exception in derived class"<<endl;
    }
    catch(Base b){
        cout<<"Exception in base class"<<endl;
    }
    
    
	return 0;
}
