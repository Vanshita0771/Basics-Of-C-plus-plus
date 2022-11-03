#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
     for(int j=0;j<m;j++)
      cin>>arr[i][j];
       for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
       if(i>=j){
        cout<<arr[i][j]<<" ";}
        else
         cout<<0<<" ";
      }
      cout<<endl;
     }
     for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
       if(i<=j){
        cout<<arr[i][j]<<" ";}
        else
         cout<<0<<" ";
      }
      cout<<endl;
     }
     
    
    return 0;
  }
