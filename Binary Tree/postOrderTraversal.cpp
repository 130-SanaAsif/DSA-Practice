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
    cout<<"Enter your data "<<endl;
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
void postOrder(node*root){
    if(root == NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

//Iterative Way.
//Using two stack.
vector<int>postOrder1(node*root){
    vector<int>ans;
    if(root == NULL){
        return ans;
    }

    stack<node*>s1;
    stack<node*>s2;

    s1.push(root);

    while(!s1.empty()){
        root = s1.top();
        s2.push(root);
        s1.pop();

        if(root->left){
            s1.push(root->left);
        }
        if(root->right){
            s1.push(root->right);
        }
    }

    while(!s2.empty()){
        ans.push_back(s2.top()->data);
        s2.pop();
    }
    return ans;
}

//Approach 3 using single stack.
vector<int>PostOrder(node*root){
    vector<int>ans;
    if(root == NULL){
        return ans;
    }

    stack<node*>s;
    while(!s.empty() || root != NULL){
        if(root != NULL){
           s.push(root);
           root = root->left;
        }
        else{
            node*temp = s.top()->right;
            
            if(temp == NULL){
                temp = s.top();
                s.pop();
                ans.push_back(temp->data);

                while(!s.empty() && temp == s.top()->right){
                    temp = s.top();
                    s.pop();
                    ans.push_back(temp->data);
                }
            }
            else{
                root = temp;
            }
        }
    }
    return ans;
}

int main(){
    node*root = NULL;
    root = buildTree(root);
    postOrder(root);
    cout<<endl;
    vector<int>ans = postOrder1(root);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    vector<int>res = PostOrder(root);
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }

return 0;
}