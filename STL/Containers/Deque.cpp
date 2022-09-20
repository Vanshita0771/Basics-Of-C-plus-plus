#include<iostream>
#include<deque>
#include<iterator>
using namespace std;
void print(deque<int> d){
    deque<int>::iterator it;
    cout<<"Elements in deque are:"<<endl;
    for(it=d.begin();it!=d.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main(){
	int n;
	cout<<"Enter number of elements you want to insert in deque:"<<endl;
	cin>>n;
	deque<int> d;
	int a;
	cout<<"Enter the elements:"<<endl;
	for(int i=0;i<n;i++){
	    cin>>a;
	    d.push_back(a);
	}
	print(d);
	d.push_front(9);
	d.push_back(70);
	print(d);
	d.pop_front();
	d.pop_back();
	print(d);
	deque<int>::iterator it;
	it=d.begin();
	
    it=it+3;
	
	d.insert(it,2,78);
    print(d);
	return 0;
}
