//Pattern 17 (Hollow Diamond using stars)

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n;i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        if(i!=1){
        cout<<"*";
        }
        for(int j=1; j<=i-1; j++){
            cout<<" ";
        }
        for(int j=1; j<=i-2; j++){
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
    for(int i=2; i<=n;i++){
        for(int j=1; j<=i-1; j++)
            cout<<" ";
            cout<<"*";
        
        for(int j=1; j<=n-i; j++)
            cout<<" ";
        
        for(int j=1; j<=n-i-1; j++)
            cout<<" ";
        
        if(i!=n)
            cout<<"*";
            cout<<endl;
    
    }
}
