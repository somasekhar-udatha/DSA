#include <iostream>
#include<queue>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;
        
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelOrder(node*root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
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

node* buildTreeUsingLevelOrder(node* root){
    cout<<"enter root data"<<endl;
    int root_data;
    cin>>root_data;
    root = new node(root_data);
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        int left_data,right_data;
        cout<<"enter node left to "<<temp->data<<endl;
        cin>>left_data;
        if(left_data != -1){
            temp->left = new node(left_data);
            q.push(temp->left);
        }
        cout<<"enter node right to "<<temp->data<<endl;
        cin>>right_data;
        if(right_data != -1){
            temp->right = new node(right_data);
            q.push(temp->right);
        }
    }
    return root;
}

int main()
{
    node* root = NULL;
    root = buildTreeUsingLevelOrder(root);
    levelOrder(root);
    return 0;
}
