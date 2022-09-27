/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Stacks{
    int top;
    int Stack[50];
    int MaxCapacity;
    public:
    Stacks(){
        MaxCapacity=50;
        top=-1;
    }
    int getTop();
    int pop();
    void push(int Element);
    int Empty();
    int CurrSize();
    int IsFull();
};

int Stacks::getTop(){
    if(Empty())
     return -1;
    return Stack[top];
}

int Stacks:: pop(){
    if(Empty())
     return -1;
    int temp=Stack[top];
    top--;
    return temp;
}

void Stacks::push(int Element){
    if(IsFull())
         cout<<"Stack is full"<<endl;
     else
        Stack[++top]=Element;
}

int Stacks::Empty(){
    if(top==-1)
     return 1;
   return 0;  
}

int Stacks::IsFull(){
    if(top==MaxCapacity-1)
     return 1;
     return 0;
}

int Stacks::CurrSize(){
    return top+1;
}

int main()
{
    Stacks st;
    st.push(1);
    st.push(3);
    if(st.IsFull())
      cout<<"Stack is full"<<endl;
    else
      cout<<"Stack is not full"<<endl;
    cout<<"Popped Element:"<<st.pop()<<endl;
    st.push(4);
    
    cout<<"Stack Current size:"<<st.CurrSize()<<endl;
    cout<<"Popped Element:"<<st.pop()<<endl;
    cout<<"Stack Current size:"<<st.CurrSize()<<endl;
    cout<<"Popped Element:"<<st.pop()<<endl;
    cout<<"Stack Current size:"<<st.CurrSize()<<endl;
    return 0;
    
}

