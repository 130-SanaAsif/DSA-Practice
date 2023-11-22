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
    cout<<"Enter your data : "<<endl;
    int data;
    cin>>data;

    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter data for inserting in left of : "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting in right of : "<<data<<endl;
    root->right = buildTree(root->right);

    return root;
}

void reverseOrderTraversal(node*root){
    queue<Node*> q;
    q.push(root);
    stack<Node*> s;

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();  
        s.push(temp);

    if(temp->right != NULL){
        q.push(temp->right);
    }
    if(temp->left != NULL){
        q.push(temp->left);
    }
    return;
}

int main(){
    node*root = NULL;
    buildTree(root);
    reverseOrderTraversal(root);
    // vector<int>ans = reverseOrderTraversal(root);
    // for(int i=0; i<ans.size(); i++){
    //     cout<<ans[i]<<" ";
    // }
return 0;
}