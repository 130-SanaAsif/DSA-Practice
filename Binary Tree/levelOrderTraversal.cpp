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
node* buildBinaryTree(node* root){
    cout<<"Enter your data: "<<endl;
    int data;
    cin>>data;

    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout<<"Enter data for inserting in left of a "<<data<<endl;
    root->left = buildBinaryTree(root->left);

    cout<<"Enter data for inserting in right of a "<<data<<endl;
    root->right = buildBinaryTree(root->right);

    return root;
}
void levelOrderTraversal(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node*temp = q.front();
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

int main(){
    node*root = NULL;
    root = buildBinaryTree(root);

    //level order traversal.
    cout<<"Level Order Traversal"<<endl;
    levelOrderTraversal(root);
return 0;
}