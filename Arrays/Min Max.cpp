#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int arr[n];
      for(int i=0; i<n; i++){
        cin>>arr[i];
      }
      int min,max;
      max=min=arr[0];
      for(int i=0; i<n; i++){
        if(arr[i]>max){
          max=arr[i];
        }
        if(arr[i]<min){
          min=arr[i];
        }
      }
      cout<<min<<" "<<max<<endl;
    }
    return 0;
  }
