#include <iostream>
using namespace std;
void towerOfHanoi(int n,char src,char dest,char helper){
    if(n==0)
     return;
    towerOfHanoi(n-1,src,helper,dest);
    cout<<"From: "<<src<<" to "<<dest<<endl;
    towerOfHanoi(n-1,helper,dest,src);
}
int main()
{
    int n;
    cout<<"Enter no. of disks:";	
	cin>>n;
	//calling the TOH 
	towerOfHanoi(n,'A','C','B');

    return 0;
}
