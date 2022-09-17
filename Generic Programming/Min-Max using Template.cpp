//Finding maximum and minimum element from array
#include <iostream>
using namespace std;

template<class T>
T min(T arr[],int n){
    T x;
   if(n==1){
       return arr[0];
   }
   else{
       x= min(arr,n-1);
   }
   if(x<arr[n-1]){
       return x;
   }
   return arr[n-1];
}

template<class T>
T max(T arr[],int n){
    T x;
   if(n==1){
       return arr[0];
   }
   else{
       x= max(arr,n-1);
   }
   if(x>arr[n-1]){
       return x;
   }
   return arr[n-1];
}


int main()
{
    double a[]={1.2,6.7,5.7,3.7};
    
    cout<<"Min:"<<min<double>(a,4)<<endl;
    cout<<"Max:"<<max<double>(a,4)<<endl;
    
    return 0;
}
