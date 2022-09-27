#include <iostream>
#include<stack>
using namespace std;
void DecimalToBinary(int n){
    stack<int> st;
    while(n!=0){
        int rem=n%2;
        st.push(rem);
        n=n/2;
    }
    while(st.size()!=0){
        cout<<st.top();
        st.pop();
    }
}
int main()
{ 
    int n;
    cin>>n;
    DecimalToBinary(n);
    return 0;
}

