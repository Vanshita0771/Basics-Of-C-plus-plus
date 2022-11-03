#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int n,m;
    cin>>n>>m;
    int a[m][n],b[m][n];
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++)
      cin>>a[i][j];
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++)
      cin>>b[i][j];
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        cout<<a[i][j]+b[i][j]<<" ";
      }
      cout<<endl;
    }
     for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        int mult=0;
        for(int k=0;k<n;k++){
          mult+=a[i][k]*b[k][j];
        }
        cout<<mult<<" ";
      }
      cout<<endl;
    }
    return 0;
  }
