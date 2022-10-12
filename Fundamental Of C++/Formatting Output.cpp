//Formatting output
#include <iostream>
#include<iomanip>
using namespace std;


int main()
{
	float a=845.97889;
	cout<<setw(10)<<a<<endl;//set width of output field
	cout<<setw(10)<<setfill('@')<<a<<endl;//setfill->specifies theb fill characters
	cout<<setprecision(3)<<a<<endl;//specifies the number of decimals for floating points
    return 0;
    
}
