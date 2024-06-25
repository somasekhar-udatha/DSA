#include <iostream>
using namespace std;

class Stack{
    //properities
    public:
        int *arr;
        int size;
        int top;
        
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    
    void push(int element){
        if(top < size-1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"STACK OVERFLOW"<<endl;
        }
    }
    
    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"STACK UNDERFLOW"<<endl;
        }
    }
    
    int peek(){
        if(top >= 0){
            return arr[top];
        }
        cout<<"empty stack"<<endl;
        return -1;
    }
    
    bool isempty(){
        if(top == -1){
            return true;
        }
        return false;
    }
};

int main()
{
    Stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<"top element"<<st.peek()<<endl;
    st.pop();
    cout<<"top element"<<st.peek()<<endl;
    if(st.isempty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }
    st.pop();
    st.pop();
    cout<<"top element"<<st.peek()<<endl;
    if(st.isempty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }
    return 0;
}
