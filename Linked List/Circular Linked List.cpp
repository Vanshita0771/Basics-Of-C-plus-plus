#include<iostream>
using namespace std;
class node{
    public:
     int data;
     node* next;
};
node* head=NULL;

void add_at_front(int item){
    node* n=new node;
    n->data=item;
    if(head==NULL){
    head=n;
    n->next=head;
    }
    else{
        node* ptr=head;
        while(ptr->next!=head){
            ptr=ptr->next;
        }
        ptr->next=n;
        n->next=head;
        head=n;
    }
}

void add_at_back(int item){
    node* n=new node;
    n->data=item;
    if(head==NULL){
    head=n;
    n->next=head;
    }
    else{
        node* ptr=head;
        while(ptr->next!=head){
            ptr=ptr->next;
        }
        ptr->next=n;
        n->next=head;
    }
}

void display(){
    if(head==NULL)
     return;
    node* ptr=head;
    do{
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    while(ptr!=head);
    cout<<endl;
    
}

void number_of_elements(){
    if(head==NULL){
     cout<<"No elements"<<endl;
     return;
    }
    node* ptr=head;
    int count=0;
    do{
        count++;
        ptr=ptr->next;
    }
    while(ptr!=head);
    cout<<"No of elements in circular list:"<<count<<endl;
}
 
void delete_from_front(){
    if(head==NULL){
        cout<<"Underflow condition"<<endl;
        return;
    }
     if(head->next==head){
        head=NULL;
        return;
    }
   
        node* ptr=head;
        while(ptr->next!=head){
            ptr=ptr->next;
        }
        ptr->next=head->next;
        head=head->next;
    
}

void delete_from_back(){
    if(head==NULL){
        cout<<"Underflow condition"<<endl;
        return;
    }
    if(head->next==head){
        head=NULL;
        return;
    }
    
        node* ptr=head;
        while(ptr->next->next!=head){
            ptr=ptr->next;
        }
        ptr->next=head;
}

node* search(int key){
    if(head==NULL)
     return NULL;
    node* ptr=head;
    do{
        if(ptr->data==key)
         return ptr;
    }
    while(ptr!=head);
    return NULL;
}

void reverse_printing(node* ptr){
     if(ptr==NULL)
      return;
     if(ptr->next==head){
     cout<<ptr->data<<" ";
     return;
     }
     reverse_printing(ptr->next);
     cout<<ptr->data<<" ";
}

void reversing_the_list(){
    node* curr,*next,*pre;
    pre=NULL;
    curr=head;
    node* temp=head;
    while(curr->next!=head){
        next=curr->next;
        curr->next=pre;
        pre=curr;
        curr=next;
    }
    curr->next=pre;
    head=curr;
    temp->next=head;
}
int main(){
   number_of_elements();
    add_at_front(1);
    delete_from_front();
    add_at_back(2);
    add_at_back(3);
    add_at_front(0);
    add_at_back(4);
    number_of_elements();
    delete_from_front();
    delete_from_back();
    display();
    number_of_elements();
    if(search(2)!=NULL)
    cout<<"Element 2 is present in list"<<endl;
    else
    cout<<"Not found"<<endl;
    display();
    reverse_printing(head);
    reversing_the_list();
    cout<<endl;
    display();
    return 0;
}

