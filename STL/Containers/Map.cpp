//Maps are associative containers that store elements in a mapped fashion. Each element has a key value and a mapped value. 
//No two mapped values can have the same key values.
#include<iostream>
#include<map>
#include<iterator>
using namespace std;
void print(map<int,char> m){
    map<int,char>::iterator it;
    cout<<"Key : Value"<<endl;
    for(it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<"\n";
    }
    cout<<endl;
}
int main(){
	map<int,char> m;
	m.insert(make_pair(1,'e'));
	m.insert({2,'r'});
	m.insert(pair<int, int>(7, 'v'));
	print(m);
  m.erase(2);
  print(m);
	
	return 0;
}
