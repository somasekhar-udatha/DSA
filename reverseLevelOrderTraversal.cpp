#include <iostream>
using namespace std;
#include<queue>
#include<stack>

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        
    Node(int d){
        this->data = d;
        Node* left = NULL;
        Node* right = NULL;
    }
};

Node* buildTree(Node* root){
    cout<<"enter data: "<<endl;
    int node_data;
    cin>>node_data;
    root = new Node(node_data);
    if(node_data == -1){
        return NULL;
    }
    cout<<"enter data for inserting to left of "<<node_data<<endl;
    root->left = buildTree(root->left);
    cout<<"enter data for inserting to right of "<<node_data<<endl;
    root->right = buildTree(root->right);
    return root;
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void reverseLevelOrderTraversal(Node* root){
    queue<Node*> Q;
    stack<Node*> S;
    Q.push(root);
    Q.push(NULL);
    while(!Q.empty()){
        Node* temp1 = Q.front();
        Q.pop();
        S.push(temp1);
        if(temp1 == NULL){
            if(!Q.empty()){
                Q.push(NULL);
            }
        }
        else{
            if(temp1->right){
                Q.push(temp1->right);
            }
            if(temp1->left){
                Q.push(temp1->left);
            }
        }
    }
    while(!S.empty()){
        Node* temp2 = S.top();
        S.pop();
        if(temp2 == NULL){
            cout<<endl;
        }
        else{
            cout<<temp2->data<<" ";
        }
    }
}

int main()
{
    Node* root = NULL;
    root = buildTree(root);
    //levelOrderTraversal(root);
    reverseLevelOrderTraversal(root);
    return 0;
}
