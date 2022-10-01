#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

class QueueArray{
  const int SIZE = 4;
  int front = -1;
  int rear = -1;
  int *queue;
  public:
  	QueueArray(){
      queue = new int[SIZE];
    }
  	void enQueue(int data);
  	int deQueue();
};
void QueueArray::enQueue(int data){
  // Write your code here
  if((front==0&&rear==SIZE-1)||((front-1)==rear))
    return;
  if(rear==SIZE-1)
     rear=0;
  else if(front==-1)
    rear=front=0;
  else
     rear++;
  queue[rear]=data;
}

// Remove First element from queue
int QueueArray::deQueue(){
  // Write your code here
  if((front==-1))
    return -1;
  int temp=queue[front];
  if(front==rear)
     front=rear=-1;
  else if(front==SIZE-1)
    front=0;
  else 
    front++;
  return temp;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    QueueArray *queue = new QueueArray();
    while(n--){
      int choice ;
      cin>>choice;
      if(choice == 1){
        int data;
        cin>>data;
        queue->enQueue(data);
      }else if(choice == 2){
        cout<<queue->deQueue()<<' ';
      }
    }
    cout<<endl;
  }
  return 0;
}
