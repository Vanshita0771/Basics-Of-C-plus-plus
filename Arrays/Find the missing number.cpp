#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
  int t;
  cin>>t;
  while(t--){
    long long int n;
    cin>>n;
    int arr[n];
    for(long long i=0; i<n-1; i++){
      cin>>arr[i];
    }
    long long sumN=n*(n+1)/2;
    long long sum=0;
    for(long long i=0; i<n-1; i++){
      sum=sum+arr[i];
    }
    cout<<sumN-sum<<endl;
    
  }
    return 0;
  }
