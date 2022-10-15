#include <iostream>
using namespace std;
int main()
{
    string str="Hello world! how are you?";
    int i=0;
    int j=str.length()-1;
    for(int i=0;i<str.length();i++){
        if(str[i-1]==' '){
            str[i]=str[i]-32;
        }
    }
    cout<<str<<endl;
    return 0;
}
