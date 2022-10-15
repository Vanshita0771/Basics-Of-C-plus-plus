#include <iostream>
using namespace std;
int main()
{
   
    string str="Hello world! how are you?";
    int count=0;
    for(int i=0;i<str.length();i++){
      if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
         count++;
     }
    cout<<"Number of vowels:"<<count;
    return 0;
}
