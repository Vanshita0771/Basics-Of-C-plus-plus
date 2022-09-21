/*Sets are a type of associative containers in which each element has to be unique, because the value of the element identifies it.
The value of the element cannot be modified once it is added to the set, though it is possible to remove and add the modified value of that element.*/
#include<iostream>
#include<set>
#include<iterator>
using namespace std;
void print(set<int> s){
    set<int>::iterator it;
    cout<<"Elements in set are:"<<endl;
    for(it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main(){
	int n;
	cout<<"Enter number of elements you want to insert in set:"<<endl;
	cin>>n;
	int a;
	set<int> s;
	cout<<"Enter the elements:"<<endl;
	for(int i=0;i<n;i++){
	    cin>>a;
	    s.insert(a);
	}
	print(s);
	
	if(s.find(2)!=s.end()){
	    cout<<"Element found"<<endl;
	}
	cout<<"Max capacity:"<<s.max_size()<<endl;
	cout<<"No of elements in set:"<<s.size();
	return 0;
}
