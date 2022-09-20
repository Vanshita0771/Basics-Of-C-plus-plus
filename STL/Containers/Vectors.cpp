#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cout<<"Enter number of elements you want to insert:"<<endl;
	cin>>n;
	
	//declaring the vector to contain n elements with value 0
	vector<int> v(n);
	
	cout<<"Enter elements you want to insert:"<<endl;
	for(int i=0;i<v.size();i++){
		cin>>v[i];
	}
	
	cout<<"Enter the index to know which element is present:"<<endl;
	int a;
	cin>>a;
	cout<<"Element at "<<a<<":"<<v.at(a)<<endl;//returns the element at that index
	
	//declaring iterator for vector
	vector<int>::iterator it;
	
	//it points to first element of vector
	it=v.begin();
	
	it=it+3;
	//inserting 7 elements(450) from  3rd position
	v.insert (it,7,450);
	it=v.begin();
	
	//printing the elements of vector
    for(int i=0;i<v.size();i++){
		cout<<v[i]<<"  ";
	}

	vector<int> v2(v);
	v2.push_back(2);
	v2.push_back(6);
	v2.push_back(7);
	
	vector<int> v3(v2);
	v3.push_back(34);
	v3.push_back(45);
	
	vector<int>::iterator it1;
	int s=v2.size();
	it1=v3.begin();
	it1=it1+s;
	cout<<"\nIntersection of v2 and v3"<<endl;
	for(it1;it1!=v3.end();it1++){
		cout<<*it1<<endl;
	}
	
	vector<int> v1;
	for(int i=0;i<9;i++)
	  v1.push_back(3);
	  
	
	cout<<"size of v1:"<<v1.size()<<"capacity: "<<v1.capacity();
	//v1.erase(v1.begin(),v1.end());//capacity remains same but size becomes 0
	
	v1.shrink_to_fit();//capacity becomes equal to size
	cout<<"size:"<<v1.size()<<"capacity:"<<v1.capacity();
	return 0;
}
