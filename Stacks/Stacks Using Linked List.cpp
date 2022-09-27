#include <iostream>

using namespace std;

class Stacks{
    int size;
    struct node{
        int data;
        node* next;
    };
    node* head;
    public:
    Stacks(){
        size=0;
        head=NULL;
    }
    int getTop();
    int pop();
    void push(int Element);
    int Empty();
    int CurrSize();
};

int Stacks::getTop(){
    if(Empty())
     return -1;
    return head->data;
}

int Stacks:: pop(){
    if(Empty())
       return -1;
    int temp=head->data;
    head=head->next;
    size--;
    return temp;
}

void Stacks::push(int Element){
    node* new_node=new node();
    new_node->data=Element;
    new_node->next=head;
    head=new_node;
    size++;
}

int Stacks::Empty(){
   if(head)
    return 0;
  return 1;
}


int Stacks::CurrSize(){
    return size;
}

int main()
{
    Stacks* st=new Stacks();
    st->push(1);
    st->push(3);
    
    cout<<"Popped Element:"<<st->pop()<<endl;
    st->push(4);
    
    cout<<"Stack Current size:"<<st->CurrSize()<<endl;
    cout<<"Popped Element:"<<st->pop()<<endl;
    cout<<"Stack Current size:"<<st->CurrSize()<<endl;
    cout<<"Popped Element:"<<st->pop()<<endl;
    cout<<"Stack Current size:"<<st->CurrSize()<<endl;
    return 0;
    
}

