#include <iostream>
#include<stack>
using namespace std;
int precedence(char a){
    if(a=='+'||a=='-')
     {return 1;}
    else if(a=='*'||a=='/')
     {return 2;}
    else if(a=='^')
    {return 3;}
    else
     return -1;
}
string InfixToPostfix(string s){
    stack<char> st;
    int i=0;
    string ans="";
    while(s[i]!='\0'){
        if(s[i]>='A'&&s[i]<='Z'||s[i]>='0'&&s[i]<='9')
         ans+=s[i];
        else if(s[i]=='(')
            st.push(s[i]);
        else if(s[i]==')'){
         while(st.top()!='('){
             ans+=st.top();
             st.pop();
         }
         st.pop();
        }
        else
        {                   
          while(st.size()!=0&&precedence(st.top())>=precedence(s[i])){
              ans+=st.top();
              st.pop();
         
        }
         st.push(s[i]);
          
    }
    i++;
    }
    while(st.size()!=0){
        ans+=st.top();
        st.pop();
    }
   
   
    return ans;
}


int main()
{
    string s="(A-B/C)*(A/K-L)";
    cout<<InfixToPostfix(s)<<endl;
    return 0;
}



