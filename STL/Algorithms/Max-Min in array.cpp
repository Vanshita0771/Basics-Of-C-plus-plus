/*Header file--algorithm
Algorithm--*min_element and *max_element
Two parameters--
               1)Address of 1st element
               2)Next address to last element
                
Return value--data-type of elements in the array         
*/
#include <iostream>
#include<algorithm>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[]={2,1,3,4,1,4,2,5};
    cout<<"Largest element in the array:"<<*max_element(arr,arr+8)<<endl;
    cout<<"Smallest element in the array:"<<*min_element(arr,arr+8)<<endl;
    return 0;
}
