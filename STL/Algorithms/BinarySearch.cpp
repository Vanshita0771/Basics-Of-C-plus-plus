/*Header file--algorithm
Algorithm--binary_search()
Three parameters--
               1)Address of 1st element of the array
               2)Address of the next contiguous  location of the last element of the array.
               3)Value to be searched in the array
Return type-- boolean (true when key found else false)               
*/
#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    cout<<"Enter the value you want to search in the array:";
    int key;
    cin>>key;
    if(binary_search(arr,arr+7,3)){
        cout<<"Key found"<<endl;
    }
    else{
        cout<<"Key not found"<<endl;
    }
    return 0;
}
