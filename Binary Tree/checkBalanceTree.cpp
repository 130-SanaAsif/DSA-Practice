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

//Brute Force Approach.
//TC - O(N*N).
//SC - O(N).

bool checkTree(node*root){
    if(root == NULL){
        return true;
    }
    int lh = checkTree(root->left);
    int rh = checkTree(root->right);

    if(abs(lh-rh)>1) return false;

    bool lef = checkTree(root->left);
    bool rih = checkTree(root->right);

    if(!lef || !rih) return false;

    return true;
}

//Optimised Approach.
//TC = O(N).
//SC = O(N).
int solve(node*root){
    if(root == NULL){
        return 0;
    }

    int lh = solve(root->left);
    if(lh == -1) return -1;
    int rh = solve(root->right);
    if(rh == -1) return -1;

    if(abs(lh-rh) > 1) return -1;

    return max(lh,rh) + 1;
}
bool check(node*root){
    return solve(root) != -1;
}

int main(){
    node*root = NULL;
    root = buildTree(root);

    if(checkTree(root)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
return 0;
}