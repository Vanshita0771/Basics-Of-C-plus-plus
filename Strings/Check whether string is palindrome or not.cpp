#include <iostream>
using namespace std;
int main()
{
   
    string str="rar";
    int i=0;
    int j=str.length()-1;
    bool flag=true;
    while(i<j){
        if(str[i]!=str[j])
         {
             flag=false;
             break;
         }
         i++;
         j--;
    }
    if(flag)
     cout<<"String is a palindrome"<<endl;
    else
     cout<<"String is not palindrome"<<endl;
    return 0;
}
