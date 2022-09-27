#include <iostream>
#include<stack>
#include<cmath>
using namespace std;
int postfixEval(string s){
    stack<int>st;
    for(int i=0;i<s.length();i++){
    if(s[i]>='0'&&s[i]<='9')
     st.push(s[i]-'0');
    else{
        int b=st.top();
        st.pop();
        int a=st.top();
        st.pop();
        if(s[i]=='+')
         st.push(a+b);
         else if(s[i]=='-')
         st.push(a-b);
         else if(s[i]=='/')
         st.push(a/b);
         else if(s[i]=='*')
         st.push(a*b);
         else
         st.push(pow(a,b));
      }
        
    }
    return st.top();
}
int main()
{
    string s;
    cin>>s;
    cout<<postfix(s)<<endl; 
    return 0;
}


