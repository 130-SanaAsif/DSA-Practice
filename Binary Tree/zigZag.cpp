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

vector<vector<int>> zigzagLevelorder(node*root){
    vector<vector<int>>ans;
    if(root == NULL){
        return ans;
    }

    queue<node*>q;
    q.push(root);
    bool flag = true;
    while(!q.empty()){
        int n = q.size();
        vector<int>res(n);

        for(int i=0; i<n; i++){
            node*temp = q.front();
            q.pop();

            if(flag){
                res[i] = temp->data;
            }
            else{
                res[n-i-1] = temp->data;
            }

            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        ans.push_back(res);
        flag = !flag;
    }

    return ans;
}

int main(){
    node*root = NULL;
    root = buildTree(root);

    vector<vector<int>>ans = zigzagLevelorder(root);

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}