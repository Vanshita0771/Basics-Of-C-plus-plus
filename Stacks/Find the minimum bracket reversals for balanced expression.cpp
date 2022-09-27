#include<bits/stdc++.h>
using namespace std;
#define MAX_LEN 100000
int minReversal(char* s){
  // Write your code here
  int n=0;
  int i=0;
  while(s[i]!='\0'){
    n++;
    i++;
  }
  if(n%2!=0)
    return -1;
  stack<char> st;
  int open=0,close=0;
  int count=0;
  for(int i=0;i<n;i++){
    if(s[i]=='[')
      st.push(s[i]);
    else if(s[i]==']'&&st.size()==0){
      close++;
    }
      else
        st.pop();
  }
  open+=st.size();
  if(close==0&&open==0)
    return 0;
 return (open+1)/2+(close+1)/2;
}
int main()
{
  int t, ans;
  cin>>t;
  while(t--)
  {
    char expr[MAX_LEN + 1];
    cin>>expr;
    ans = minReversal(expr);
    cout<<ans<<endl;
  }
  return 0;
}
