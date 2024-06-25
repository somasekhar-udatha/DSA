#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class Stack{
    public:
        Node* head = NULL;
        int size;
    
    Stack(){
        head = NULL;
        size = 0;
    }
    
    void push(int element){
        Node* temp = new Node(element);
        //temp->data = element;
        temp->next = head;
        head = temp;
        size++;
    }
    
    void pop(){
        if(head == NULL){
            cout<<"STACK UNDERFLOW"<<endl;
        }
        Node* temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
        size--;
    }
    int top(){
        if(head != NULL){
            return head->data;
        }
        else{
            return -1;
        }
    }
    
    int stack_size(){
        return size;
    }
    
    bool is_empty(){
        if(head == NULL){
            return true;
        }
        return false;
    }
};


int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<"stack size:"<<st.stack_size()<<endl;
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<"stack size:"<<st.stack_size()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<"stack size:"<<st.stack_size()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<"stack size:"<<st.stack_size()<<endl;
    return 0;
}
