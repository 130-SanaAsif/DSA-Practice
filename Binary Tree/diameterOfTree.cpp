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

int solve(node*root, int&dia){
    if(root == NULL){
        return 0;
    }

    int lh = solve(root->left, dia);
    int rh = solve(root->right, dia);

    dia = max(dia, lh+rh);

    return 1+max(lh,rh);
}

int diameterOfTree(node*root){
    int dia = 0;
    solve(root,dia);
    return dia;
}

int main(){
    node*root = NULL;
    root = buildTree(root);

    int res = diameterOfTree(root);
    cout<<"The diameter of the tree is - "<<res<<endl;
return 0;
}