#include<iostream>
#include<list>
#include<iterator>
using namespace std;
void print(list<int> l){
    list<int>::iterator it;
    cout<<"Elements in list are:"<<endl;
    for(it=l.begin();it!=l.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main(){
	int n;
	cout<<"Enter number of elements you want to insert in list:"<<endl;
	cin>>n;
	list<int> l;
	int a;
	cout<<"Enter the elements:"<<endl;
	for(int i=0;i<n;i++){
	    cin>>a;
	    l.push_back(a);
	}
	print(l);
	l.push_front(9);
	l.push_back(70);
	print(l);
	l.pop_front();
	l.pop_back();
	print(l);
	list<int>::iterator it;
	it=l.begin();
  
	list<int> list2 = { 30, 50, 60 };
        print(list2);
        l.merge(list2);
   
	
	l.insert(it,2,78);
        print(l);
    
        l.sort();
        print(l);
    
    l.reverse();
    print(l);
    
   
	return 0;
}
