/*Header file--algorithm
Algorithm--reverse()
Two parameters--
               1)Address of 1st element
               2)Next address of last element
                
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
    cout<<"Reverse of the array :";
    reverse(arr,arr+8);
    print(arr,8);
    return 0;
}
