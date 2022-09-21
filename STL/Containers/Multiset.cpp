//Multisets are a type of associative containers similar to the set, with the exception that multiple elements can have the same values.
#include<iostream>
#include<set>

using namespace std;
void print(multiset<int> s){
    multiset<int>::iterator it;
    cout<<"Elements in multiset are:"<<endl;
    for(it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main(){
	int n;
	cout<<"Enter number of elements you want to insert in multiset:"<<endl;
	cin>>n;
	int a;
	multiset<int> s;
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
