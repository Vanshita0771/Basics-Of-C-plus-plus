#include <iostream>
#include <stack>
using namespace std;

int main()
{
   string s="([])}";
   stack<char> st;
   int i;
   for( i=0;i<s.length();i++){
       if(s[i]=='['||s[i]=='{'||s[i]=='(')
        st.push(s[i]);
      else{
       if(s[i]==']'){
        if(st.size()!=0&&st.top()=='[')
        st.pop();
        else
         break;}
       if(s[i]==')'){
        if(st.size()!=0&& st.top()=='(')
        st.pop();
        else
         break;}
          if(s[i]=='}'){
        if(st.size() && st.top()=='{')
        st.pop();
        else
         break;
        }}
   }
   if(st.size()==0&&i==s.length())
    cout<<"Balanced parenthesis";
   else
    cout<<"Not Balanced parenthesis";
     return 0;
}

