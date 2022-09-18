/*There is a special catch block called the ‘catch all’ block, written as catch(…), that can be used to catch all types of exceptions*/
#include <iostream>
using namespace std;
template<class T>
void division(T a,T b){
    try{
        if(b==0)
         throw b;
        else
         cout<<"Division of a and b:"<<(float)a/b<<endl;
    }
    catch(...){
        cout<<"Can't divide by 0.Its an exception"<<endl;
    }
}
int main()
{
    division<int>(9,0);
    division<float>(2.4,7);
    return 0;
}
