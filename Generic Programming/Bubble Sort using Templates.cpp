#include <iostream>
using namespace std;

template<class T>
void bubbleSort(T arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j+1]<arr[j]){
                T temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

template<class T>
void print(T arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    double a[]={1.2,6.7,5.7,3.7};
    int b[]={6,4,9,10,8,5};
    bubbleSort<double> (a,4);
    bubbleSort<int>(b,6);
    print(a,4);
    print(b,6);
    return 0;
}
