/*Header file--algorithm
Algorithm--count--to find the occurrence of the element
Two parameters--
               1)Address of 1st element
               2)Next address to last element
               3)Value to be counted
Return value--integer    
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
    cout<<"Enter the value to find its occurrence in the array:";
    int value;
    cin>>value;
    cout<<"No of occurrences:"<<count(arr,arr+8,value)<<endl;
    
    return 0;
}
