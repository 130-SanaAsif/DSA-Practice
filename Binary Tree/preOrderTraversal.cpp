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
    cout<<"Enter your data " <<endl;
    int data;
    cin>>data;

    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter data for inserting in left of a "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting in right of a "<<data<<endl;
    root->right = buildTree(root->right);

    return root;
}

//Recursive Way.
void preOrder(node*root){
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

//Iterative way.
vector<int>preOrderTraversal(node*root){
    vector<int>ans;
    if(root == NULL){
        return ans;
    }
    stack<node*>s;
    s.push(root);

    while(!s.empty()){
        node*temp = s.top();
        ans.push_back(temp->data);
        s.pop();

        if(temp->right){
            s.push(temp->right);
        }
        if(temp->left){
            s.push(temp->left);
        }
    }
    return ans;
}

int main(){
    node*root = NULL;
    root = buildTree(root);
    preOrder(root);
    cout<<endl;
    vector<int>ans = preOrderTraversal(root);
    for(int i=0; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
return 0;
}