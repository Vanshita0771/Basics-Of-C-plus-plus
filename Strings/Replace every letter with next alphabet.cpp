#include <iostream>
using namespace std;
int main()
{
    string str="Hello World";
    int i=0;
    int j=str.length()-1;
    for(int i=0;i<str.length();i++){
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
        {
            char a=str[i]+1;
            str[i]=a;
        }
    }
    cout<<str<<endl;
    return 0;
}r
