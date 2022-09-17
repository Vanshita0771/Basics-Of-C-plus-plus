/*Class Templates like function templates, class templates are useful when a class defines something that is independent of the data type.
Can be useful for classes like LinkedList, BinaryTree, Stack, Queue, Array, etc. */
#include<iostream>
using namespace std;
template<class T>
class Stack{
	int top=-1;
	int n=0;
	T *arr;
	public:
		Stack(int size){
			n=size;
			arr=new T[n];
		}
		void peek();
		bool isEmpty();
		bool isFull();
		void push(T);
		T pop();
		
};

template<class T>
void Stack<T>:: peek(){
	cout<<"Top:"<<top<<endl;
}

template<class T>
bool Stack<T>:: isEmpty(){
	if(top==-1)
	 return 1;
	return 0;
}

template<class T>
bool Stack<T>:: isFull(){
	if(top==n-1)
		return 1;
	return 0;
}

template<class T>
void Stack<T>:: push(T data){
	if(isFull())
	{
	cout<<"Stack is full"<<endl;
	return;
	}
	arr[++top]=data;
}

template<class T>
T Stack<T>:: pop(){
	if(isEmpty())
		{
		cout<<"Stack is empty"<<endl;
		return -1;
		}
		return arr[top--];
}

int main(void){
	cout<<"Enter the number of elements to be inserted:"<<endl;
	int n;
	cin>>n;
	Stack<float> st(n);
	for(int i=0;i<n;i++){
		cout<<"Enter the value to be pushed in stack:"<<endl;
		float data;
		cin>>data;
		st.push(data);
	}
	cout<<"Element popped:"<<st.pop()<<endl;
    st.peek();
	return 0;
}
