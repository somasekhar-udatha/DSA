#include <iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(10);
    cout<<"front: "<<q.front()<<endl;
    q.push(20);
    cout<<"front: "<<q.front()<<endl;
    q.push(30);
    cout<<"front: "<<q.front()<<endl;
    cout<<"size: "<<q.size()<<endl;
    q.pop();
    cout<<"front: "<<q.front()<<endl;
    cout<<"size: "<<q.size()<<endl;
    if (q.empty()){
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"queue is not empty"<<endl;
    }
    q.pop();
    cout<<"front: "<<q.front()<<endl;
    cout<<"size: "<<q.size()<<endl;
    if (q.empty()){
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"queue is not empty"<<endl;
    }
    q.pop();
    cout<<"front: "<<q.front()<<endl;
    cout<<"size: "<<q.size()<<endl;
    if (q.empty()){
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"queue is not empty"<<endl;
    }
    return 0;
}
