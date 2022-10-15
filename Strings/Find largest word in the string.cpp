#include <iostream>
using namespace std;
int main()
{
    string words="";
    string l="";
    string str="Hello world! how are you?";
    int i=0;
    int j=str.length()-1;
    int largest=0;
    
    for(int i=0;i<str.length();i++){
       if(str[i]==' '){
           if(largest<words.length()){
               largest=words.length();
               words.swap(l);
           }
            words="";
       }
       else{
           words+=str[i];
           
       }
    }
    if(words.length()>largest){
         words.swap(l);
    }
    cout<<l<<endl;
    return 0;
}
