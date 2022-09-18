/*Exception handling in C++ consists of three keywords: try, throw and catch:

The try statement allows you to define a block of code to be tested for errors while it is being executed.
The throw keyword throws an exception when a problem is detected, which lets us create a custom error.
The catch statement allows you to define a block of code to be executed if an error occurs in the try block.
*/
#include <iostream>
using namespace std;

void division(int a,int b){
    try{
        if(b==0)
         throw b;
        else
         cout<<"Division of a and b:"<<(float)a/b<<endl;
    }
    catch(int x){
        cout<<"Can't divide by 0.Its an exception"<<endl;
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    division(a,b);

    return 0;
}
