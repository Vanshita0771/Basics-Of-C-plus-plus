#include<iostream>
#include<cstring>
using namespace std;
class str{
	char *p;
	int len;
	public:
		str(){
			len=0;
			p=0;
			cout<<"default"<<endl;
		}
		str(const char *t){
			len=strlen(t);
			p=new char[len+1];
			strcpy(p,t);
			cout<<"explicit"<<endl;
		}
		str(const str &s){
			len=s.len;
			p=new char[len+1];
			strcpy(p,s.p);
			cout<<"copy"<<endl;
		}
		void print(){
			cout<<"The string is:::>>"<<p;
		}
		friend str operator+(const str &s1,const str &s2);
		friend int operator<=(const str &s1,const str &s2);
};
str operator+(const str &s1,const str &s2){
	str temp;//default constructor if not initialised
	temp.len=s1.len+s2.len;
	temp.p=new char[temp.len+2];
	strcpy(temp.p,s1.p);
	strcat(temp.p," ");
	strcat(temp.p,s2.p);
	return temp;
}
int operator<=(const str &s1,const str &s2){
	int n=s1.len;
	int m=s2.len;
	return n<=m;
}
int main(){
	str s1("Vanshita");//explicit
	str s2("Kakkar");//explicit
	str s4;//default constructor called
	s4=s2;
   	str s3=s1+s2;
   	str s5(s3);//copy constructor
	s3.print();
	if(s1<=s2)
	 cout<<"\ns1 <=s2"<<endl;
	else
	 cout<<"\ns1>s2"<<endl;
	return 0;
}
