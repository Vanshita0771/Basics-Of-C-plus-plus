#include <iostream>
using namespace std;
class LinkedList{
    class node{
        public:
        int data;
        node* next;
        node(int val){
            data=val;
        }
    };
    public:
    node* head=NULL;
    void add_at_back(int val){
        node* n=new node(val);
        if(head==NULL){
            head=n;
        }
        else{
            node* ptr=head;
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            ptr->next=n;
        }
        
    }
    void evenAfterOdd(LinkedList* l1){
        node* ptr=l1->head;
        node* h=l1->head;
        while(ptr!=NULL){
            add_at_back(ptr->data);
            if(ptr->next==NULL)
             break;
            ptr=ptr->next->next;
        }
        ptr=l1->head->next;
        while(ptr!=NULL){
            add_at_back(ptr->data);
             if(ptr->next==NULL)
             break;
            ptr=ptr->next->next;
        }
        
    }
    void merge(LinkedList* l1,LinkedList* l2){
        node* ptr1=l1->head;
        node* ptr2=l2->head;
        while(ptr1!=NULL&&ptr2!=NULL){
            if(ptr1->data>ptr2->data){
                add_at_back(ptr2->data);
                ptr2=ptr2->next;
            }
            else{
                 add_at_back(ptr1->data);
                 ptr1=ptr1->next;
            }
        }
        while(ptr2!=NULL){
           
                add_at_back(ptr2->data);
                ptr2=ptr2->next;
            }
            while(ptr1!=NULL){
           
                add_at_back(ptr1->data);
                ptr2=ptr2->next;
            }
    }
    void display(){
        node* ptr=head;
        while(ptr!=NULL){
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
        cout<<endl;
    }
};
int main()
{
   LinkedList* l1=new LinkedList();
   l1->add_at_back(1);
   l1->add_at_back(3);
   l1->add_at_back(5);
   LinkedList* l2=new LinkedList();
   l2->add_at_back(2);
   l2->add_at_back(4);
   l2->add_at_back(6);
   LinkedList* l3=new LinkedList();
   l3->merge(l1,l2);
   l3->display();
   LinkedList* l4=new LinkedList();
   l4->evenAfterOdd(l3);
   l4->display();
   return 0;
}
