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

node* buildTree(node*root){
    int data;
    cout<<"Enter your data : "<<endl;
    cin>>data;

    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right = buildTree(root->right);

    return root;
}

bool checkSameTree(node*p, node*q){
    if(p == NULL || q == NULL){
        return (p == q);
    }

    return (p->data == q->data)
            && checkSameTree(p->left, q->left)
            && checkSameTree(p->right, q->right);
}

int main(){
    node* p = NULL;
    p = buildTree(p);

    node* q = NULL;
    q = buildTree(q);

    if(checkSameTree(p,q)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False";
    }
return 0;
}