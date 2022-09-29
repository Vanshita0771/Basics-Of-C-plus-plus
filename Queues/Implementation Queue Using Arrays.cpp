#include <iostream>
using namespace std;
class Queue{
    int* arr;
    int front;
    int rear;
    int n;
    public:
    Queue(int size){
        n=size;
        arr=new int[size];
        front=rear=-1;
    }
    bool isFull(){
        if(rear==n-1){
            return true;
        }
        return false;
    }
    bool isEmpty(){
        if(front==-1){
            return true;
        }
        return false;
    }
    void enqueue(int data){
        if(isFull()){
            cout<<"Element can't be inserted.Queue is full"<<endl;
        }
        if(isEmpty()){
            front=rear=0;
            arr[rear]=data;
        }
        else{
            arr[++rear]=data;
        }
    }
    int dequeue(){
        if(isEmpty()){
            cout<<"Queue is empty "<<endl;
            return -1;
        }
        int temp=arr[front];
        if(front==rear){
            front=rear=-1;
        }
        else{
            front++;
        }
        return temp;
    }
    void display(){
        cout<<"Displaying elements"<<endl;
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    Queue q1(5);
    cout<<q1.isEmpty()<<endl;
    q1.enqueue(7);
    q1.enqueue(8);
    q1.enqueue(7);
    q1.enqueue(7);
    q1.enqueue(7);
    q1.enqueue(4);
    cout<<q1.isEmpty()<<endl;
    cout<<q1.isFull()<<endl;
    cout<<q1.dequeue()<<endl;
    q1.display();
    return 0;
}
