#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    
      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++)
       cin>>arr[i];
       int even=0,odd=0;
       for(int i=0;i<n;i++){
         if(arr[i]%2==0)
          even++;
          else
           odd++;
       }
       int e[even];
       int o[odd];
       int k=0,j=0;
       for(int i=0;i<n;i++)
        {
          if(arr[i]%2==0)
           e[k++]=arr[i];
           else
            o[j++]=arr[i];
        }
        for(int i=0;i<even;i++)
         cout<<e[i]<<" ";
         cout<<endl;
         for(int i=0;i<odd;i++)
         cout<<o[i]<<" ";
         cout<<endl;
    
    return 0;
  }
