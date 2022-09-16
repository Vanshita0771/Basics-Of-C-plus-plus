#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
node* head=NULL;
void add_Linked_List_back(int item){
    node* p=new node;
    p->data=item;
    if(head==NULL)
        head=p;
    else{
       node* ptr=head; 
       while(ptr->next!=NULL)
           ptr=ptr->next;
       ptr->next=p;
    }
}
void add_Linked_List_front(int item){
    node* p=new node();
    p->data=item;
    p->next=head;
    head=p;
}

void add_Linked_List_before_specific_pos(int pos,int item){
    node* p=new node();
    p->data=item;
    if(pos==2)
     {
         p->next=head;
         head=p;
         return;
     }
    int count=1;
    bool flag=false;
    node* ptr=head;
    while(ptr!=NULL){
        if(count==pos-2){
         flag=true;
         break;
        }
        ptr=ptr->next;
        count++;
    }
    if(flag){
        p->next=ptr->next;
        ptr->next=p;
    }
    else
     cout<<"Invalid position"<<endl;
}

void add_Linked_List_at_specific_pos(int pos,int item){
    node* p=new node();
    p->data=item;
    if(pos==1)
     {
         p->next=head;
         head=p;
         return;
     }
    int count=1;
   
    node* ptr=head;
    while(ptr!=NULL){
        if(count==pos-1){
          p->next=ptr->next;
        ptr->next=p;
        return;
        }
        ptr=ptr->next;
        count++;
    }
     cout<<"Invalid position"<<endl;
}

void add_Linked_List_after_specific_pos(int pos,int item){
     node* p=new node();
    p->data=item;
    int count=1;
    bool flag=false;
    node* ptr=head;
    while(ptr!=NULL){
        if(count==pos){
         flag=true;
         break;
        }
        ptr=ptr->next;
        count++;
    }
    if(flag){
        p->next=ptr->next;
        ptr->next=p;
    }
    else
     cout<<"Invalid position"<<endl;
}

void del_from_front(){
    head=head->next;
}

void del_at_specific_pos(int pos){
    int count=1;
    if(pos==1){
        head=head->next;
        return;
    }
    node* ptr=head;
    while(ptr->next!=NULL){
        if(count==pos-1){
            ptr->next=ptr->next->next;
            return;
        }
        count++;
        ptr=ptr->next;
    }
    cout<<"Invalid position"<<endl;
}

void del_after_specific_pos(int pos){
    int count=1;
    node* ptr=head;
    while(ptr->next!=NULL){
        if(count==pos){
            ptr->next=ptr->next->next;
            return;
        }
        count++;
        ptr=ptr->next;
    }
    cout<<"Invalid position"<<endl;
}

void del_before_specific_pos(int pos){
    int count=1;
    if(pos==2){
        head=head->next;
        return;
    }
    node* ptr=head;
    while(ptr->next!=NULL){
        if(count==pos-2){
            ptr->next=ptr->next->next;
            return;
        }
        count++;
        ptr=ptr->next;
    }
    cout<<"Invalid position"<<endl;
}

void del_from_back(){
    if(head==NULL)
     cout<<"Empty";
    else if(head->next==NULL)
         head=NULL;
    else{
       node* ptr=head;
       while(ptr->next->next!=NULL)
           ptr=ptr->next;
       ptr->next=NULL;
    }
}

void search(int key){
    node* ptr=head;
    
    while(ptr!=NULL){
        if(ptr->data==key)
         {
         cout<<"Element is present in linked list"<<endl;
         return;
         }
         ptr=ptr->next;
    }
    
     cout<<"Element is not present in linked list"<<endl;
}

void number_of_elements(){
    int count=0;
    node* ptr=head;
    while(ptr!=NULL){
        count++;
        ptr=ptr->next;
    }
    cout<<"No of elements in linked list:"<<count<<endl;
}

void display(){
    node* ptr=head; 
       while(ptr!=NULL){
           cout<<ptr->data<<" ";
           ptr=ptr->next;
       }
       cout<<endl;
}
void reverse_the_list(){
  
    node* pre=NULL;
    node* curr=head;
    node* next;
   while(curr!=NULL){
    next=curr->next;
    curr->next=pre;
    pre=curr;
    curr=next;}
    head=pre;

}
void reverse_order_of_printing(node* head){
    if(head==NULL)
     return;
    reverse_order_of_printing(head->next);
    cout<<head->data<<" ";
}
int main() {
	add_Linked_List_back(1);
	add_Linked_List_back(2);
	add_Linked_List_back(3);
	add_Linked_List_before_specific_pos(5,89);
	add_Linked_List_at_specific_pos(4,67);
	del_before_specific_pos(3);
	number_of_elements();
	display();
	reverse_order_of_printing(head);
	cout<<endl;
	display();
	cout<<endl;
    reverse_the_list();
    display();
    search(89);
	return 0;
}



