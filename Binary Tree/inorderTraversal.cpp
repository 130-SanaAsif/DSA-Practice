#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node*left;
    node*right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node*buildTree(node*root){
    cout<<"Enter your data : "<<endl;
    int data;
    cin>>data;

    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter data for inserting in left of a : "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting in right of a : "<<data<<endl;
    root->right = buildTree(root->right);

    return root;
}

void inOrderTraversal(node*root){
    if(root == NULL){
        return;
    }
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}

int main(){
    node*root = NULL;
    root = buildTree(root);
    cout<<"Inoder Traversal "<<endl;
    inOrderTraversal(root);

return 0;
}