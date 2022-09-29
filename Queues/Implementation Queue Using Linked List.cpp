#include <iostream>
using namespace std;
class Queue{
    class node{
        public:
        int data;
        node* next;
        node(int dd){
            data=dd;
            next=NULL;
        }
    };
    node* front;
    node* rear;
    public:
    Queue(){
       front=NULL;
       rear=NULL;
    }
    bool isEmpty(){
        if(front==NULL){
            return true;
        }
        return false;
    }
    void enqueue(int data){
      node* n=new node(data);
       if(front==NULL){
           front=rear=n;
       }
       else{
           rear->next=n;
           rear=n;
       }
    }
    int dequeue(){
       if(isEmpty()){
          cout<<"Queue is empty"<<endl;
          return -1;
       }
       int temp=front->data;
       if(front==rear){
           front=rear=NULL;
       }
       else{
           int temp=front->data;
           front=front->next;
    }
    return temp;
   }
    void display(){
       node* ptr=front;
       cout<<"Displaying queue"<<endl;
       while(ptr!=NULL){
           cout<<ptr->data<<" ";
           ptr=ptr->next;
       }
       cout<<endl;
    }
};
int main()
{
    Queue q1;
    cout<<q1.isEmpty()<<endl;
    q1.enqueue(7);
    q1.enqueue(8);
    q1.enqueue(7);
    q1.enqueue(7);
    q1.enqueue(7);
    q1.enqueue(4);
    cout<<q1.isEmpty()<<endl;
    cout<<q1.dequeue()<<endl;
    q1.display();
    return 0;
}
