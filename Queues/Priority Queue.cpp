/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
class Priority{
   struct node{
      int data;
      node* next;
      int priority;
   } ;
   node* front;
   node* rear;
   public:
         Priority(){
             front=NULL;
             rear=NULL;
         }
         void enqueue(int item,int prior){
             node* new_node=new node;
             new_node->data=item;
             new_node->priority=prior;
             if(front==NULL){
                 front=new_node;
                 rear=new_node;
             }
             else if(front->priority>new_node->priority){
                   new_node->next=front;
                   front=new_node;
               }
             else if(rear->priority<new_node->priority){
                    rear->next=new_node;
                    rear=new_node;
                }
             else{
                 node* ptr=front;
                 while(ptr->next->priority<prior){
                     
                     if(ptr==NULL)
                     break;
                     ptr=ptr->next;
                 }
                 if(ptr->next==NULL){
                     rear->next=new_node;
                     rear=new_node;
                 }
                 else{
                     new_node->next=ptr->next;
                     ptr->next=new_node;
                 }
             }
         }
         
         int dequeue(){
             if(front==NULL){
                 return -1;
             }
             int temp=front->data;
             if(front==rear)
                front=rear=NULL;
             else
                front=front->next;
             return temp;
             
         }
         void show(){
             node* ptr=front;
             while(ptr!=NULL){
                 cout<<ptr->data<<" "<<ptr->priority<<endl;
                 ptr=ptr->next;
             }
         }
    
};
int main()
{
    Priority p;
    p.enqueue(4,1);
    p.enqueue(5,7);
    p.enqueue(6,2);
    cout<<p.dequeue()<<endl;
    p.enqueue(4,2);
    cout<<"-------Display-------"<<endl;
    p.show();
    return 0;
}


