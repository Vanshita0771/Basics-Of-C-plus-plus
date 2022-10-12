#include <iostream>
#define n 10 //another type of declaration of constant variable
using namespace std;
int a=10;//Global variables which are accessible in whole program 
int b;//If it is not initialised ,it will be assigned to value 0
int main()
{
	const float pi=3.14;//value of constant can't be changed and should be initializated along with declaration

    int c=12;//Local variable->Accessible within the function (main) only.If it is not initialised ,it will be assigned to garbage value 
    {
    	cout<<c<<endl;//12
    	int c=13;// Different variable 
		cout<<++c<<endl;//14 
	}
	cout<<c;//12 
    return 0;
}
