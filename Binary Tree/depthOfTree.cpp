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

node* buildtree(node*root){
    int data;
    cout<<"Enter your data : "<<endl;
    cin>>data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }
    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left = buildtree(root->left);

    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right = buildtree(root->right);

    return root;
}

int maxDepth(node*root){
    if(root == NULL){
        return 0;
    }

    int lt = maxDepth(root->left);
    int rt = maxDepth(root->right);

    return 1 + max(lt,rt);
}

int main(){
    node* root = NULL;
    root = buildtree(root);
    int res = maxDepth(root);
    cout<<"The maximum depth of tree is "<<res;
return 0;
}