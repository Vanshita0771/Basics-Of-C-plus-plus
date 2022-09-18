/*Stack Unwinding is the process of removing function entries from function call stack at run time.
The local objects are destroyed in reverse order in which they were constructed. */
#include <iostream>
using namespace std;
void f1(){
    try{
      cout<<"Start f1()"<<endl;
      throw 100;
      cout<<"End f1()"<<endl;
    }
    catch(int x){
       throw; 
    }
}
void f2(){
     try{
       cout<<"Start f2()"<<endl;
       f1();
       cout<<"End f2()"<<endl;
    }
    catch(int x){
       throw; 
    }
}
int main()
{
    try{
     	f2();
    }
    catch(...){
        cout<<"Exception caught"<<endl;
    }
    
	return 0;
}
