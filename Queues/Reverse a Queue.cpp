#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

class Queue{
  int *queue;
  int front;
  int rear;
  int size;
  public:
  	Queue(int size){
      this->size = size;
      queue = new int[size];
      front = 0;
      rear = 0;
    }
  	void enQueue(int data){
      if(rear == size){
        cout<<"Overflow\n";
        return;
      }
      queue[rear++] = data;
    }
 	int deQueue(){
    	if(front == rear){
      		return -1;
    	}
    	return queue[front++];
  	}
  	bool isEmpty(){
      return front == rear;
    }
};

void reverseQueue(Queue *q){
  // Write your code here 
   if (!q->isEmpty()){
     int temp=q->deQueue();
     reverseQueue(q);
     cout<<temp<<" ";
     
  }
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    Queue *queue = new Queue(100);
    while(n--){
      int x;
      cin>>x;
      queue->enQueue(x);
    }
    reverseQueue(queue);
    while((n = queue->deQueue())!=-1)
      cout<<n<<' ';
    cout<<endl;
  }
}
