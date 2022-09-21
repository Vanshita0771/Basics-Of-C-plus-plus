//Multimap is similar to a map with the addition that multiple elements can have the same keys.
#include<iostream>
#include<map>
#include<iterator>
using namespace std;
void print(multimap<int,char> m){
    multimap<int,char>::iterator it;
    cout<<"Key : Value"<<endl;
    for(it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<"\n";
    }
    cout<<endl;
}
int main(){
	multimap<int,char> m;
	m.insert(make_pair(1,'e'));
	m.insert({2,'r'});
	m.insert({2,'r'});
	m.insert({2,'r'});
	m.insert(pair<int, int>(7, 'v'));
	print(m);
  m.erase(2);
  print(m);
	
	return 0;
}
