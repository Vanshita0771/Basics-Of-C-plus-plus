#include <iostream>
using namespace std;
class twoStacks{
    int size;
    int* arr;
    int top1;
    int top2;
    public:
    twoStacks(int n){
        size=n;
        arr=new int[size];
        top1=-1;
        top2=size;
    }
    void push1(int x){
        if(top2-top1==1)
        {
             return;
        }
        arr[++top1]=x;
    }
    void push2(int x){
        if(top2-top1==1)
        {
             return;
        }
        arr[--top2]=x;
    }
    int pop1(){
        if(top1==-1)
         {
             return -1;
         }
         return arr[top1--];
    }
    int pop2(){
        if(top2==size)
         {
             return -1;
         }
         return arr[top2++];
    }
    
};

int main()
{
        twoStacks *sq = new twoStacks(5);
        int Q;
        cin>>Q;
        while(Q--){
        int stack_no;
        cin>>stack_no;
        int QueryType=0;
        cin>>QueryType;
        
        if(QueryType==1)
        {
            int a;
            cin>>a;
            if(stack_no ==1)
            sq->push1(a);
            else if(stack_no==2)
            sq->push2(a);
        }else if(QueryType==2){
        	if(stack_no==1)
            cout<<sq->pop1()<<" ";
            else if(stack_no==2)
            cout<<sq->pop2()<<" ";

        }
        }
        
}
