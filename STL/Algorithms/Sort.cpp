/*Header file--algorithm
Algorithm--sort()
Three parameters--
               1)Address of 1st element
               2)Next address to last element
               3)Optional parameters in case of using user-defined or in-built function 
Return value--none             
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
    cout<<"Sorted array in ascending order:";
    sort(arr,arr+8);
    print(arr,8);
    cout<<"Sorted array in descending order :";
    sort(arr,arr+8,greater<int>());
    print(arr,8);
    return 0;
}
