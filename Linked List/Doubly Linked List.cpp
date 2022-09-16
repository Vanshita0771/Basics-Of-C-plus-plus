#include <iostream>
using namespace std;
class Doubly_LL{
    struct node{
       int data;
       node* pre;
       node* next;
     };
     node* front=NULL;
     node* end=NULL;
     public:
     void add_at_front(int item){
        node* n=new node();
        n->data=item;
        if(front==NULL)
            front=end=n;
        else{
            n->next=front;
            front->pre=n;
            front=n;
        }
    }
    void add_at_back(int item){
         node* n=new node();
        n->data=item;
        if(front==NULL)
            front=end=n;
        else{
            end->next=n;
            n->pre=end;
            end=n;
        }
    }
    node* search(int key){
        node* ptr=front;
        while(ptr!=NULL){
            if(ptr->data==key)
             return ptr;
            ptr=ptr->next;
        }
        return NULL;
    }
    void add_after(node* org, int item){
        node* n=new node();
        n->data=item;
        n->pre=org;
        n->next=org->next;
        if(org->next!=NULL){
         org->next->pre=n;
        }
        else
         end=n;
        org->next=n;
    }
    void add_before(node* org, int item){
        node* n=new node();
        n->data=item;
        n->next=org;
        n->pre=org->pre;
        if(org->pre!=NULL){
        org->pre->next=n;
        }
        else
         front=n;
        org->pre=n;
    }
    
    void delete_from_front(){
        front=front->next;
        front->pre=NULL;
    }
    
    void delete_from_end(){
        end=end->pre;
        end->next=NULL;
    }
    
    void delete_after(node* n){
       if(n->next->next==NULL)
          end=n;
       else
         n->next->next->pre=n;
          
       n->next=n->next->next;
        
    }
    
    void delete_before(node* n){
        if(n->pre->pre==NULL)
         front=n;
        else
        n->pre->pre->next=n;
        n->pre=n->pre->pre;
    }
     
    void display(){
        node* ptr=front;
        while(ptr!=NULL){
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
        cout<<endl;
    }
    void display_rev(){
         
        node* ptr=end;
        while(ptr!=NULL){
            cout<<ptr->data<<" ";
            ptr=ptr->pre;
        }
        cout<<endl;
    }
};
int main()
{
    Doubly_LL d;
    d.add_at_front(1);
    d.add_at_back(2);
    d.add_at_back(3);
    d.add_before(d.search(1),21);
    d.add_after(d.search(3),23);
    d.display();
    d.delete_before(d.search(1));
    d.delete_from_front();
    d.display();
    d.display_rev();
    return 0;
}
