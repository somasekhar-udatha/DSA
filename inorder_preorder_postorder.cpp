#include <iostream>
#include<queue>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        
    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
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
    cout<<"enter data to the left of "<<node_data<<endl;
    root->left = buildTree(root->left);
    cout<<"enter data to the right of "<<node_data<<endl;
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

void inorderTraversal(Node* root){
    if(root == NULL){
        return ;
    }
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}

void preorderTraversal(Node* root){
    if(root == NULL){
        return ;
    }
    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
    
}

void postorderTraversal(Node* root){
    if(root == NULL){
        return ;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->data<<" ";
    
}

int main()
{
    Node* root = NULL;
    root = buildTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    levelOrderTraversal(root);
    cout<<"Inorder Traversal"<<endl;
    inorderTraversal(root);
    cout<<endl;
    cout<<"Preorder Traversal"<<endl;
    preorderTraversal(root);
    cout<<endl;
    cout<<"Postorder Traversal"<<endl;
    postorderTraversal(root);
    cout<<endl;
    return 0;
}
