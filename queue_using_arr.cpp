#include <iostream>
using namespace std;

class Queue{
    public:
        int* arr;
        int front;
        int rear;
        int size;
    
    Queue(int size){
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }
    
    void enqueue(int element){
        if(rear == size-1){
            cout<<"Queue is full"<<endl;
        }
        else{
            arr[rear] = element;
            rear++;
        }
    }
    
    int dequeue(){
        if(front == rear){
            return -1;
        }
        else{
            int ans = arr[front];
            arr[front] == -1;
            front++;
            if(front == rear){
                front = 0;
                rear = 0;
            }
            return ans;
        }
    }
    
    bool isEmpty(){
        if(front == rear){
            return true;
        }
        return false;
    }
    
    int Front(){
        if(front == rear){
            return -1;
        }
        return arr[front];
    }

};

int main()
{
    Queue q(5);
    q.enqueue(10);
    cout<<"Front: "<<q.Front()<<endl;
    q.enqueue(20);
    q.enqueue(30);
    q.dequeue();
    cout<<"Front: "<<q.Front()<<endl;
    if(q.isEmpty()){
        cout<<"Queue is empty"<<endl;
    }
    q.dequeue();
    cout<<"Front: "<<q.Front()<<endl;
    if(q.isEmpty()){
        cout<<"Queue is empty"<<endl;
    }
    q.dequeue();
    cout<<"Front: "<<q.Front()<<endl;
    if(q.isEmpty()){
        cout<<"Queue is empty"<<endl;
    }
    return 0;
}
