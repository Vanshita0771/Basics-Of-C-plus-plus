#include <iostream>
#include <stack>
using namespace std;
int pre(char a)
{
    if(a=='/'||a=='*')
     return 2;
    else if(a=='+'||a=='-')
     return 1;
    else
     return -1;
}
void infixtoPrefix(string s){
    string a="";
    for(int i=s.length()-1;i>-1;i--)
     a+=s[i];
    s=a;
   
    for(int i=0;i<s.length();i++){
        if(s[i]=='(')
         s[i]=')';
        else if(s[i]==')')
         s[i]='(';
    }
   
    string output="";
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
         output+=s[i];
        else if(s[i]=='(')
         st.push(s[i]);
        else if(s[i]==')'){
            while(st.top()!='(')
             {
                 output+=st.top();
                 st.pop();
             }
             st.pop();
        }
        else{
            while(st.size()!=0&&pre(st.top())>=pre(s[i])){
                output+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(st.size()!=0){
        output+=st.top();
        st.pop();
    }
    // cout<<output<<endl;
    string result="";
    for(int i=output.length()-1;i>-1;i--)
     result+=output[i];
    cout<<result<<endl;
}
int main()
{
   string s="(A-B/C)*(A/K-L)";
    infixtoPrefix(s);

    return 0;
}

