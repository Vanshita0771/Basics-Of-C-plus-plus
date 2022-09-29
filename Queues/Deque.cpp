/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

using namespace std;
class Deque{
    struct node{
        int data;
        node* pre;
        node* next;
        node(int dd){
            data=dd;
            pre=NULL;
            next=NULL;
        }
    };
    node* front=NULL;
    node* rear=NULL;
    public:
    void insert_at_front(int item){
        node* new_node=new node(item);
        if(front==NULL){
            front=rear=new_node;
        }
        else{
            new_node->next=front;
            front->pre=new_node;
            front=new_node;
        }
    }
    void insert_at_back(int item){
        node* new_node=new node(item);
        if(front==NULL){
            front=rear=new_node;
        }
        else{
            new_node->pre=rear;
            rear->next=new_node;
            rear=rear->next;
        }
    }
    int delete_from_front(){
        if(front==NULL)
         return -1;
         
        int temp=front->data;
        
        if(front==rear)
            front=rear=NULL;
        else{
            
            front=front->next;
            front->pre=NULL;
            
        }
        return temp;
    }
    int delete_from_back(){
        if(front==NULL)
         return -1;
         int temp=rear->data;
        
        if(front==rear)
          front=rear=NULL;
         else{
             rear->pre->next=NULL;
             rear=rear->pre;
             
         }
         return temp;
    }
    void show_queue(){
        if(front==NULL)
         cout<<"Queue is empty"<<endl;
        else
          {
              node* ptr=front;
              while(ptr!=NULL)
               {
                   cout<<ptr->data<<" ";
                   ptr=ptr->next;
               }
               cout<<endl;
          }
    }
    void show_queue_in_reverse_order(){
        if(front==NULL)
         cout<<"Queue is empty"<<endl;
        else
          {
              node* ptr=rear;
              while(ptr!=NULL)
               {
                   cout<<ptr->data<<" ";
                   ptr=ptr->pre;
               }
               cout<<endl;
          }
    }
};


int main()
{
    Deque d1;
    d1.insert_at_front(1);
    d1.insert_at_back(2);
    d1.insert_at_front(1);
    d1.insert_at_back(2);
    d1.insert_at_front(-1);
    cout<<"Element deleted_from_back:"<<d1.delete_from_back()<<endl;
    cout<<"Element deleted_from_front:"<<d1.delete_from_front()<<endl;
    cout<<"Display the queue"<<endl;
    d1.show_queue();
    cout<<"Display the queue in reverse order"<<endl;
    d1.show_queue_in_reverse_order();
    return 0;
}

