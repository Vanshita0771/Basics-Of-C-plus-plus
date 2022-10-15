#include <iostream>
using namespace std;
int main()
{
    string str="Hello World";
    int i=0;
    int j=str.length()-1;
    while(i<j){
        swap(str[i],str[j]);
        i++;
        j--;
    }
    cout<<str<<endl;
    return 0;
}
